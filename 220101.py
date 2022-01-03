N, M = map(int, input().split())
#print(M)
d = [[0] * M for _ in range(N)]
# 2차원 리스트 Comprehension
x, y, direction = map(int, input().split())
d[x][y] = 1

a = []
for i in range(N): #N은 세로
    a.append(list(map(int, input().split())))

dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

# 북 동 남 서 -> 0 1 2 3
def turn():
    global direction
    direction -= 1
    if direction == -1:
        direction = 3

cnt = 1 # 이미 북쪽방향을 가리키고 있으므로
time = 0
while True:
    turn()
    nx = x + dx[direction]
    ny = y + dy[direction]
    if d[nx][ny] == 0 and a[nx][ny] == 0:
        d[nx][ny] = 1
        x = nx
        y = ny
        cnt += 1
        time = 0
        continue
    else:
        time += 1
    if time == 4:
        nx = x - dx[direction]
        ny = y - dy[direction]
        if a[nx][ny] == 0:
            x = nx
            y = ny
        else:
            break
        time = 0

print(cnt)


