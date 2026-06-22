def find_max(arr: list, k: int) -> int:
    i, j = 0, len(arr) - 1
    arr.sort()

    pref = arr
    for i in range(1, len(arr)):
        pref[i] += pref[i-1]
    pref.insert(0, 0)

    res = 0
    for i in range(0, k + 1):
        low, high = 2 * i, k - i
        res = max(res, pref[len(arr) - 1 - high] - pref[low])

    return res

def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        arr = list(map(int, input().split()))

        print(find_max(arr, k))

if __name__ == "__main__":
    main()