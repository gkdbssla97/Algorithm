data = input()

x, y = int(ord(data[0]) - 96), int(data[1])
print(x, y)
move_types = ['up1','up2','down1','down2',
 'left1','left2','right1','right2']
dx = [-1,1,-1,1,-2,-2,2,2]
dy = [-2,-2,2,2,-1,1,-1,1]

cnt = 0
for i in range(len(move_types)):
    nx = x + dx[i]
    ny = y + dy[i]
    print('val:',nx,ny)
    if(1 <= nx <= 8 and 1 <= ny <= 8):
        cnt += 1

print(cnt)
    
