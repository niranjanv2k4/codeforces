def distinct_gcd(n: int, l: int, r: int):
    res = []

    for i in range(1, n + 1):
        if l % i == 0:
            res.append(l)
        else:
            num = l + (i - (l % i))
            if num > r:
                print("NO")
                return
            res.append(num)
    
    print("YES")
    print(*res)

def main():
    t = int(input())
    for _ in range(t):
        n, l, r = map(int, input().split())
        distinct_gcd(n, l, r)


if __name__ == "__main__":
    main()
