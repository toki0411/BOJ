import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

n = int(input())
graph = [list(map(int,input().split())) for _ in range(n)]
ans = 0
visited = [[0] * (n + 1) for _ in range(n)]
def dfs(x, y):
    if visited[x][y]:
        return visited[x][y]
    visited[x][y] = 1
    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]
        if 0 <= nx < n and 0 <= ny < n and graph[nx][ny] > graph[x][y]:
            visited[x][y] = max(visited[x][y], dfs(nx, ny) + 1)
        else:
            continue
    return visited[x][y]

for i in range(n):
    for j in range(n):
        if not visited[i][j]:
            dfs(i, j)

for i in range(n):
    ans = max(ans, max(visited[i]))
print(ans)
