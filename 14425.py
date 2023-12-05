N, M = map(int, input().split())
str = []
cnt = 0
for i in range(N):
    s = input()
    str.append(s)
for i in range(M):
    s = input()
    if s in str:
        cnt +=1
print(cnt)