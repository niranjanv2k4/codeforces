def helper(arr):
    n = len(arr)

    if arr[-2] > arr[-1]:
        print(-1)

    elif arr[-1] >= 0:
        print(n - 2)
        for i in range(1, n - 1):
            print(i, n - 1, n)

    else:
        if arr == sorted(arr):
            print(0)
        else:
            print(-1)


def main():
    t = int(input())

    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        helper(arr)


if __name__ == "__main__":
    main()
