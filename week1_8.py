T = int(input())

for i in range(T):
    N = int(input())
    card = input()
    pick = [0 for cnt in range(11)]
    for j in range(N):
        pick[(int)(card[j]) + 1] += 1
    cnt, idx = 0, 0
    for k in range(10):
        if max(pick) == pick[k]:
            print(max(pick))
            cnt += 1
            if k > pick.index(max(pick)):
                idx = k
    if cnt > 1:
        print(f'#{i + 1} {idx - 1} {max(pick)}')
    else:
        print(f'#{i + 1} {pick.index(max(pick)) - 1} {max(pick)}')
