def helper(arr: list):
    size, n = 1, len(arr)
    i = n - 2
    res = 0
    while size < n:
        if arr[n - size - 1] == arr[n - 1]:
            size += 1
        else:
            res += 1
            size *= 2
    return res


def main():
    t= int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))

        print(helper(arr))

if __name__ == "__main__":
    main()
