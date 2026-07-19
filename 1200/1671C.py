def helper(arr: list[int], x: int):
    arr.sort()
    size, tot, idx = 0, 0, -1
    res = 0
    for i in range(len(arr)):
        if tot + arr[i] > x:
            break
        tot += arr[i]
        idx = i
        size += 1
    days = 0
    while size > 0:
        if tot <= x:
            temp = (x - tot) // size + 1
            res += temp * size
            tot += temp * size
            days += temp
        while tot > x and idx >= 0:
            tot -= (arr[idx] + days)
            size -= 1
            idx -= 1
    return res
        

def main():
    t = int(input())
    for _ in range(t):
        n, x = map(int, input().split())
        arr = list(map(int, input().split()))

        print(helper(arr, x))

if __name__ == "__main__":
    main()
