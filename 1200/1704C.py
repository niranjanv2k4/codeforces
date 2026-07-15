def helper(n: int, arr: list):
    arr.sort()
    m = len(arr)
    arr.append(arr[0] + n)
    temp = []
    for i in range(m):
        temp.append(arr[i+1] - arr[i] - 1)

    temp.sort(reverse=True)
    saved = 0
    curr = 0
    for i in range(len(temp)):
        rest = temp[i] - curr *2
        if rest <= 0:
            break
        
        if rest == 1 or rest == 2:
            saved += 1
            curr += 1
        else:
            saved += rest - 1
            curr += 2
            
    return n - saved

def main():
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())

        arr = list(map(int, input().split()))

        print(helper(n, arr))

if __name__ == "__main__":
    main()
