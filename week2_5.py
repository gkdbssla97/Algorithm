

T = int(input())

for test in range(T):
    N = int(input())
    red_rect = []
    blue_rect = []
    for i in range(N):
        x1, y1, x2, y2, color = map(int, input().split())
        for x in range(x1, x2 + 1):
            for y in range(y1, y2 + 1):
                if color == 1:
                    red_rect.append((x, y))
                elif color == 2:
                    blue_rect.append((x, y))
    result = []
    if len(red_rect) > len(blue_rect):
        for blue in blue_rect:
            if blue in red_rect: # 중요
                result.append(blue)
    if len(red_rect) < len(blue_rect):
        for red in red_rect:
            if red in blue_rect: # 중요
                result.append(red)

    print(f'#{test + 1} {len(result)}')