import math

def max_area(s: str):
    
    size, curr, n = 0, 0, len(s)
    s += s

    for i in range(len(s)):
        if s[i] == '1':
            curr += 1
            size = max(curr, size)
        else:
            curr = 0

    size = min(size, n)
    
    if size == 1 or size == n:
        return size * size
    
    length = math.ceil(size / 2)
    breadth = length if size % 2 == 1 else (length + 1)
    
    return breadth * length

def main():
    t = int(input())
    for _ in range(t):
        
        s = input()
        print(max_area(s)) 

if __name__ == "__main__":
    main()