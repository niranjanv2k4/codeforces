def max_teleports(arr: list[int], c: int):
    arr.sort()
    res = 0
    for i in range(0, len(arr)):
        c -= arr[i]
        if c < 0:
            break
        res += 1

    return res    
        
def main():
    t = int(input())
    for _ in range(t):
        n, c = map(int, input().split())
        arr = list(map(int, input().split()))

        for i in range(n):
            arr[i] += i + 1

        print(max_teleports(arr, c))

if __name__ == "__main__":
    main()