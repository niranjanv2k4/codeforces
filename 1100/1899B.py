import math

def max_diff(arr: list):
    n = len(arr)
    list = []
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            list.append(i)
            if i != n // i:
                list.append(n // i)

    list.append(1)
    pref = [0]
    pref.append(arr[0])
    
    for i in range(1, n):
        pref.append(pref[-1] + arr[i])
    
    res = 0
    for fac in list:
        max_val, min_val = float("-inf"), float("inf")
        for i in range(fac, n + 1, fac):
            max_val = max(max_val, pref[i] - pref[i - fac])
            min_val = min(min_val, pref[i] - pref[i - fac])
        res = max(res, max_val - min_val)


    return res

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))

        print(max_diff(arr))

if __name__ == "__main__":
    main()