def helper(arr: list, query: list):
    
    dict = {}
    for i in range(len(arr)):
        if arr[i] not in dict:
            dict[arr[i]] = i + 1

    res = []
    for el in query:
        res.append(dict[el])
        for key in dict:
            if dict[key] < dict[el]:
                dict[key] += 1
        dict[el] = 1
    
    print(*res)
    

def main():
    n, q = map(int, input().split())
    arr = list(map(int, input().split()))
    query = list(map(int, input().split()))

    helper(arr, query)

if __name__ == "__main__":
    main()
