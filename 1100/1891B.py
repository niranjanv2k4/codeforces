def find_arr(a: list, x: list):
    min_val = float("inf")
    for el in x[:]:
        if el < min_val:
            for i in range(len(a)):
                if a[i] % (2 ** el) == 0:
                    a[i] += (2 ** (el - 1))

            min_val = el

    print(*a)

def main():
    t = int(input())
    for _ in range(t):
        n, q = map(int, input().split())
        a = list(map(int, input().split()))
        x = list(map(int, input().split()))

        find_arr(a, x)


if __name__ == "__main__":
    main()