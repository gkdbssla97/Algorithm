n = int(input())

cnt = 0
# for i in range(n+1):
#     for j in range(60):
#         for k in range(60):
#             if k % 10 == 3 or (k // 10) == 3:
#                 cnt += 1
#             elif j % 10 == 3 or (j // 10) == 3:
#                 cnt += 1
#                 continue
#             elif i % 10 == 3 or (i // 10) == 3:
#                 cnt += 1
#                 continue

for i in range(n+1):
    for j in range(60):
        for k in range(60):
            if '3' in str(i) + str(j) + str(k):
                cnt += 1


print(cnt)
a, b =1,2
print(a,b)
a,b=b,a
print(a,b)

# 리스트 셋 튜플 딕셔너리 
# 셋 