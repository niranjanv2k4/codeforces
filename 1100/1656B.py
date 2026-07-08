def is_possible(arr: list, k: int):
    arr.sort()
    i, j = 0, 0
    
    while j < len(arr):
        if arr[j] - arr[i] == k:
            return "YES"
        elif arr[j] - arr[i] < k:
            j += 1
        else :
            i += 1
    
    return "NO"


def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        arr = list(map(int, input().split()))

        print(is_possible(arr, k))

if __name__ == "__main__":
    main()
