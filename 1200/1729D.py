def helper(arr: list[list]):
    arr.sort(key=lambda x : x[1] - x[0])

    i, j = 0, len(arr) - 1
    res = 0

    while i < j:
        sum = arr[i][1] + arr[j][1] - (arr[i][0] + arr[j][0])
        if sum >= 0:
            res += 1
            j -= 1
        i += 1
    
    return res

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = [[] for _ in range(n) ]
        temp = list(map(int, input().split()))
        for i in range(n):
            arr[i].append(temp[i])

        temp = list(map(int, input().split()))
        for i in range(n):
            arr[i].append(temp[i])
        
        print(helper(arr))

if __name__ == "__main__":
    main()
