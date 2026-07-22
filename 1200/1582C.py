def deletions(s: str, c: chr):
    i, j = 0, len(s) - 1
    res = 0

    while i < j:
        if s[i] == s[j]:
            i += 1
            j -= 1
        elif s[i] == c:
            i += 1
            res += 1
        elif s[j] == c:
            j -= 1
            res += 1
        else:
            res = 1000001
            break

    return res

def helper(s: str):
    i, j = 0, len(s) - 1

    while i < j and s[i] == s[j]:
        i += 1
        j -= 1
    
    if i >= j:
        print(0)
    else:
        res = min(deletions(s, s[i]), deletions(s, s[j]))
        print(res if res != 1000001 else -1)
        

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input()

        helper(s)

if __name__ == "__main__":
    main()