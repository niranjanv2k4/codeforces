import math

def max_gcd(arr: list):
    total = sum(arr)
    pref = arr
    for i in range(1, len(arr)):
        pref[i] += pref[i-1]

    res = 0
    for i in range(len(arr) - 1):
        res = max(res, math.gcd(pref[i], total - pref[i]))

    return res
    

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))

        print(max_gcd(arr))


if __name__ == "__main__":
    main()