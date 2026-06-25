def sorted_indices(a: list, b: list):

    start, end, size = 0, len(a) - 1, 1

    while start < len(a) and a[start] == b[start]:
        start += 1
    
    while end >= 0 and a[end] == b[end]:
        end -= 1

    while start > 0 and b[start] >= b[start-1]:
        start -= 1
    while end < len(a) - 1 and b[end] <= b[end+1]:
        end += 1

    print(str(start + 1) + " " + str(end + 1))


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))

        sorted_indices(a, b)

if __name__ == "__main__":
    main()