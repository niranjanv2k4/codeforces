def helper(arr: int):
    i, j = 0, len(arr) - 1
    while i < j and arr[i] == arr[j]:
        i += 1
        j -= 1
    
    if i >= j:
        return "YES"
    
    temp1, temp2 = [], []
    for k in range(len(arr)):
        if arr[k] != arr[i]:
            temp1.append(arr[k])
        if arr[k] != arr[j]:
            temp2.append(arr[k])
    
    flag1, flag2 = True, True
    for i in range(len(temp1)):
        if temp1[i] != temp1[len(temp1) - 1 - i]:
            flag1 = False
            break

    for i in range(len(temp2)):
        if temp2[i] != temp2[len(temp2) - 1 - i]:
            flag2 = False
            break

    if flag1 or flag2:
        return "YES"
    
    return "NO"


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))

        print(helper(arr))

if __name__ == "__main__":
    main()
