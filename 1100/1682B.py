def X_sortable(arr: list):
    
    res = 262143
    for i in range(len(arr)):
        if arr[i] != i:
            res &= arr[i]
    
    return res

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))

        print(X_sortable(arr))

if __name__ == "__main__":
    main()
