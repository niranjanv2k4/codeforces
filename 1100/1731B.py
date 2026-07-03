MOD = 10 ** 9 + 7

def max_kill(n):
    res = (n * (n + 1) * (4 * n - 1)) // 6
    return (2022 * res) % MOD

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())

        print(max_kill(n))

if __name__ == "__main__":
    main()
