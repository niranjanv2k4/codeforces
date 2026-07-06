def is_perfectly_balanced(s: str):
    count = len(set(s))
    
    for i in range(0, count):
        idx = i
        while idx < len(s) and s[idx] == s[i]:
            idx += count
        
        if idx < len(s):
            return "NO"

    return "YES"

def main():
    t = int(input())
    for _ in range(t):
        s = input()
        print(is_perfectly_balanced(s))

if __name__ == "__main__":
    main()
