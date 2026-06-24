import math

def max_mod(arr: list):
    res = 0
    
    for i in range(len(arr) // 2):
        res = math.gcd(res, abs(arr[i] - arr[len(arr) - 1 - i]))
        
    return res

    
def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))

        print(max_mod(arr))

if __name__ == "__main__":
    main()