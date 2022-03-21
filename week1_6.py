import sys

T = int(sys.stdin.readline())

for test_case in range(1, T + 1):
    #N = int(sys.stdin.readline())
    N = int(input())
    #pick = list(map(int, sys.stdin.readline().split()))
    pick = list(map(int, input().split()))
    max_num = max(pick)
    min_num = min(pick)
    print('#'+ (str)(test_case), max_num - min_num)
    # print(max_num - min_num)
