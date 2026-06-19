def min_cost(arr: list, k: int, a: int, b: int)->int:

    if a < k and b < k:
        return 0
    
    min_a = 0 if a < k else float("inf")
    min_b = 0 if b < k else float("inf")

    for i in range(k):
        min_a = min(min_a, abs(arr[a][0] - arr[i][0]) + abs(arr[a][1] - arr[i][1]))
        min_b = min(min_b, abs(arr[b][0] - arr[i][0]) + abs(arr[b][1] - arr[i][1]))
    
    return min(abs(arr[a][0] - arr[b][0]) + abs(arr[a][1] - arr[b][1]), min_a + min_b)

def main():
    t = int(input())
    for _ in range(t):
        n, k, a, b = map(int, input().split())
        arr = []
        for _ in range(n):
            x, y = map(int, input().split())
            arr.append((x, y))

        print(min_cost(arr, k, a - 1, b - 1))


if __name__ == "__main__":
    main()