n = int(input())
graph = [[0] * (101) for _ in range(101)]

for k in range(n):
    a, b = map(int, input().split())
    for i in range(a, a+10):
        for j in range(b, b+10):
            graph[i][j] = 1
ans = 0
for i in range(101):
    ans += sum(graph[i])
print(ans)


