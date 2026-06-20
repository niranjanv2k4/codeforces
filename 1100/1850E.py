import math

def find_width(arr: list, area: int):
    a, b, c = len(arr), 0, -area

    for el in arr:
        b += 2 * el
        c += el * el

    temp = int(math.sqrt(b * b - 4 * a * c))
    temp = (-b + temp) // (2 * a)

    return temp // 2
    
def main():
    t = int(input())
    for _ in range(t):
        n, c = map(int, input().split())
        arr = list(map(int, input().split()))

        print(find_width(arr, c))

if __name__ == "__main__":
    main()