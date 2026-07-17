def helper(arr: list, s: int):

    start, end = 0, 0
    tot, curr, size = 0, 0, 0

    while end < len(arr):
        if arr[end] == 1: 
            curr += 1
            tot += 1
        while curr > s and start <= end:
            if arr[start] == 1: curr -= 1
            start += 1
        size = max(size, end - start  + 1)
        end += 1
    
    return -1 if tot < s else len(arr) - size

def main():
    t = int(input())
    for _ in range(t):
        n, s = map(int, input().split())
        arr = list(map(int, input().split()))
        print(helper(arr, s))

if __name__ == "__main__":
    main()
