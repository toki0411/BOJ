t = int(input())
for _ in range(t):
    N, M = map(int, input().split())
    sum = 1
    for i in range(0,N):
        sum *= (M - i)
    for i in range(N, 0, -1):
        sum = (sum // i)
    print(sum)

