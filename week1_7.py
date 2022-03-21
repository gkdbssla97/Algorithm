from curses.ascii import isdigit

T = int(input())

for test in range(1, T + 1):
    # K: 이동 가능한 거리, N: 종점, M: 충전소 개수
    K, N, M = map(int, input().split())
    # elec 충전 가능 정류장
    elec = tuple(map(int, input().split()))

    #1
    cur = 0
    step = cur + K
    charge_station = 0
    cnt = 0
    while (step < N):
        for i in elec:
            if cur < i <= step:
                charge_station = i
            elif step < i:
                break
        if charge_station == -1:
            cnt = 0
            break

        cur = charge_station
        step = cur + K
        cnt += 1
        charge_station = -1
    print(f"#{test} {cnt}")

