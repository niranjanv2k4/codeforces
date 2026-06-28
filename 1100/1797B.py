def can_rotate(arr: list[list[int]], k: int):
    
    n = len(arr)
    limit = n // 2 + n % 2
    
    for i in range(limit):
        for j in range(n):
            if n % 2 == 1 and i == limit - 1 and j == limit:
                break
            if arr[i][j] != arr[n-1-i][n-1-j]:
                k -= 1

    if k >= 0:
        if n % 2:
            return "YES"
        else:
            return "YES" if k % 2 == 0 else "NO"
    else:
        return "NO"
    
def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        arr = []
        for _ in range(n):
            arr.append(list(map(int, input().split())))
        
        print(can_rotate(arr, k))
    

if __name__ == "__main__":
    main()
