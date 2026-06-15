
def max_subarray(arr: list) -> int:
    j  = 0
    n = len(arr)

    sum, ans = 0, float("-inf")
    for i in range(n):
        if sum < 0:
            sum = 0
            j = i
        
        if j < i:
            if (arr[i] ^ arr[i - 1]) % 2 != 0:
                sum += arr[i]
            else:
                sum = arr[i]
                j = i
        else:
            sum = arr[i]

        ans = max(ans, sum)
    
    return ans
        



t = int(input())
for _ in range(t):

    n = int(input())
    arr = list(map(int, input().split()))

    print(max_subarray(arr))
    
