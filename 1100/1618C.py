import math
def helper(arr: list):
    gcd1, gcd2 = 0, 0
    for i in range(1, len(arr), 2):
        gcd1 = math.gcd(gcd1, arr[i])
        gcd2 = math.gcd(gcd2, arr[i-1])

    if len(arr) % 2 == 1:
        gcd2 = math.gcd(gcd2, arr[-1])
    
    res1 = True
    flag = arr[0] % gcd1 == 0
    for i in range(1, len(arr)):
        if flag == (arr[i] % gcd1 == 0):
            res1 = False
            break
        flag = (arr[i] % gcd1 == 0)

    if res1:
        return gcd1

    res2 = True
    flag = arr[0] % gcd2 == 0
    for i in range(1, len(arr)):
        if flag == (arr[i] % gcd2 == 0):
            res2 = False
            break
        flag = (arr[i] % gcd2 == 0)

    if res2:
        return gcd2
    
    return 0

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))

        print(helper(arr))

if __name__ == "__main__":
    main()
