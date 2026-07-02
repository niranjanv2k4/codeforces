import math

def max_sum(arr: list):
    dict = {}
    for i in range(len(arr)):
        dict[arr[i]] = (i + 1)

    res = -1
    
    for key1 in dict:
        for key2 in dict:
            if math.gcd(key1, key2) == 1:
                res = max(res, dict[key1] + dict[key2])


    return res


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))

        print(max_sum(arr))

if __name__ == "__main__":
    main()
