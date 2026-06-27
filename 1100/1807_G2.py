def can_create(arr: list):
    
    if len(arr) == 1:
        return "YES" if arr[0] == 1 else "NO"
    
    arr.sort()
    sum = 1
    for i in range(1, len(arr)):
        if arr[i] > sum:
            return "NO"
        sum += arr[i]
    
    return "YES"
    

    
def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))

        print(can_create(arr))


if __name__ == "__main__":
    main()