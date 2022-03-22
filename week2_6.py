

T = int(input())

# for i in range(T):
#     N = int(sys.stdin.readline())
#     pick1 = list(map(int, sys.stdin.readline().split()))
#     pick2 = list(map(int, sys.stdin.readline().split()))
#     for j in range(4):
#         result = []
#         result[j] = pick1[j] - pick2[j]
#
arr = [i for i in range(1,13)]
# print(arr)
n = len(arr)
for i in range(T):
    N, K = map(int, input().split())
    subset = []
    for j in range(1 << n):
        temp = []
        for k in range(n):
            if j & (1<<k):
                temp.append(arr[k])
                # print(f'{temp} {arr[k]}')
        subset.append(temp)
    cnt = 0
    for set in subset:
        total = 0
        if len(set) == N:
            for num in set:
                total += num
            if total == K:
                cnt += 1
    print(f'#{i + 1} {cnt}')





