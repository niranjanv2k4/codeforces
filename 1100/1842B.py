def check(a: list, b: list, c: list, x: int)->str:
    curr = 0

    for el in a:
        if el | x != x:
            break
        curr |= el
    for el in b:
        if el | x != x:
            break
        curr |= el
    for el in c:
        if el | x != x:
            break
        curr |= el

    return "YES" if curr == x else "NO"

    
def main():
    t = int(input())
    for _ in range(t):
        n, x = map(int, input().split())
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))
        c = list(map(int, input().split()))

        print(check(a, b, c, x))


if __name__ == "__main__":
    main()