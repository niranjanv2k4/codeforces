def find_ways(a: list, b:list)->int:
    a.sort()
    b.sort()
    i, j = 0, 0
    arr = []
    while i < len(a) and j < len(b):
        while i < len(a) and b[j] >= a[i]:
            i += 1
        
        arr.append(len(a) - i)
        j += 1

    res = arr[-1]

    for i in range(len(arr) - 2, -1, -1):
        res = (res * (arr[i] - (len(arr) - 1 - i))) % (1e9 + 7)
        if res == 0:
            return 0

    return int(res)
    
def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))

        print(find_ways(a, b))


if __name__ == "__main__":
    main()
