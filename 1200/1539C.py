def helper(arr: list[int], k: int, x: int):
    arr.sort()

    gaps = []
    size = 1
    for i in range(1, len(arr)):
        if arr[i] - arr[i-1] > x:
            size += 1
            gaps.append(arr[i] - arr[i-1] - 1)
    
    gaps.sort()
    for i in range(len(gaps)):
        k -= gaps[i] // x
        if k < 0:
            break
        size -= 1


    print(size)

def main():
    n, k, x = map(int, input().split())
    arr = list(map(int, input().split()))

    helper(arr, k, x)

if __name__ == "__main__":
    main()