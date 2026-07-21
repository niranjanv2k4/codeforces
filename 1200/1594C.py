def helper(n: int, x: chr, s: str):
    count = len(set(s))
    if count == 1 and s[0] == x:
        print(0)
    else:
        val = -1
        for i in range(2, len(s) + 1):
            flag = True
            for j in range(i, len(s) + 1, i):
                if s[j - 1] != x:
                    flag = False
                    break
            if flag:
                val = i
                break
        if val != -1:
            print(1)
            print(val)
        else:
            print(2)
            print(n - 1, n)
        
def main():
    t = int(input())
    for _ in range(t):
        n, x = input().split()
        n = int(n)
        s = input()

        helper(n, x, s)

if __name__ == "__main__":
    main()