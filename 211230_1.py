import sys
# n,m,k = map(int, input().split())
# print(n,m,k)

N = int(input())
data = list(input().split())

start = [1,1]
# print(start)
# print(data)

tmp = start
for i in range(len(data)):
    if data[i] == 'U':
        tmp[0] -= 1
        if N >= tmp[0] >= 1:
            start = tmp
        else : 
            tmp[0] += 1
    elif data[i] == 'D':
        tmp[0] += 1
        if 1 <= tmp[0] <= N:
            start = tmp
        else : 
            tmp[0] -= 1 
    elif data[i] == 'R':
        tmp[1] += 1
        if 1 <= tmp[1] <= N:
            start = tmp
        else : tmp[1] -= 1 
    elif data[i] == 'L':
        tmp[1] -= 1
        if tmp[1] >= 1 and tmp[1] <= N:
            start = tmp
        else : tmp[1] += 1 

    print(tmp[0], tmp[1])
print('finish:',start[0], start[1])