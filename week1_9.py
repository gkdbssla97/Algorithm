from itertools import combinations

T = int(input())


for i in range(T):
    N, M = map(int, input().split())
    pick = list(map(int, input().split()))
    result = []
    for j in range(N - M + 1):
        result.append(sum(pick[j: j + M]))
    max_num = max(result)
    min_num = min(result)
    print(f'#{i + 1} {max_num - min_num}')

