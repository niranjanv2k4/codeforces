def helper(arr: list):
    n = len(arr)
    res = 0 
    for i in range(n // 2):
        for j in range((n + 1) // 2):
            c1, c2 =  is_same(arr, i, j)
            res += min(c1, c2)

    return res

def is_same(arr: list, i: int, j: int):
    c1, c2 = 0, 0
    n = len(arr)
    if arr[i][j] == '1':
        c1 += 1
    else: c2 += 1
    if arr[j][n - 1 - i] == '1':
        c1 += 1
    else: c2 += 1
    if arr[n - 1 - j][i] == '1':
        c1 += 1
    else: c2 += 1
    if arr[n - 1 - i][n - 1 - j] == '1':
        c1 += 1
    else: c2 += 1
    
    return c1, c2
def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = []
        for i in range(n):
            arr.append(input())

        print(helper(arr))

if __name__ == "__main__":
    main()
