def max_sum(arr: list):
    arr.sort(key=abs)
    count, sum = 0, 0
    for el in arr:
        if el < 0:
            count += 1
        sum += abs(el)

    if count % 2 == 1:
        if arr[0] > 0:
            arr[0] = -arr[0]

        sum += (2 * arr[0])
    
    return sum

    

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))

        print(max_sum(arr))

if __name__ == "__main__":
    main()
