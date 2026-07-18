def helper(arr: list[int], queries: list[list[int]]):

    dict = {}
    for i in range(len(arr)):
        dict[i] = arr[i]

    i, n = 0, len(arr)
    default, tot = 0, sum(arr)
    
    while i  < len(queries):
        if queries[i][0] == 2:
            default = queries[i][1]
            tot = default * n
            dict.clear()
        else:
            idx = queries[i][1] - 1
            tot = tot - (dict[idx] if idx in dict else default) + queries[i][2]
            dict[idx] = queries[i][2]

        print(tot)
        i += 1

def main():
    n, q = map(int, input().split())
    arr = list(map(int, input().split()))
    query = []
    for i in range(q):
        query.append(list(map(int, input().split())))

    helper(arr, query)

if __name__ == "__main__":
    main()
