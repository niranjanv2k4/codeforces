
def max_height(arr: list, x: int) -> int:

    arr.sort()
    res = arr[0]
    for i in range(1, len(arr)):
        height = arr[i] - arr[i-1]
        if x - height * i < 0:
            res += x // i
            return res
        
        x -= height * i
        res += height

    res += x // len(arr)

    return res

def main():
    t = int(input())
    for _ in range(t):
        n, x = map(int, input().split())
        arr = list(map(int, input().split()))

        print(max_height(arr, x))


if __name__ == "__main__":
    main()