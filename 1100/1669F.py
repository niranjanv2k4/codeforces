def max_candies(arr: list):
    i, j = 0, len(arr) - 1
    alice, bob = arr[i], arr[j]
    res = 0
    while i < j:
        if alice == bob:
            res = max(res, i + 1 + len(arr) - j)
            i += 1
            j -= 1
            alice += arr[i]
            bob += arr[j]
        elif alice > bob:
            j -= 1
            bob += arr[j]
        else:
            i += 1
            alice += arr[i]

    return res
        
def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))

        print(max_candies(arr))

if __name__ == "__main__":
    main();
