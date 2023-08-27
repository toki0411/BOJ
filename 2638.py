import sys
from collections import deque

input = sys.stdin.readline
n, m = map(int, input().split())
graph = [list(map(int, input().split())) for _ in range(n)]
visited = [[False] * (m) for i in range(n)]

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]


def bfs(x, y):
    q = deque([(x, y)])
    while q:
        x, y = q.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if 0 <= nx < n and 0 <= ny < m and graph[nx][ny] == 0 and not visited[nx][ny]:
                # print(nx, ny)
                q.append((nx, ny))
                visited[nx][ny] = True
            elif 0 <= nx < n and 0 <= ny < m and graph[nx][ny] >= 1:
                # print(x, y)
                graph[nx][ny] += 1
def check():
    ans = 0
    for i in range(n):
        ans += sum(graph[i])
    if ans == 0:
        return True
    else:
        return False
cnt = 0
while 1:
    if check():
        break
    visited = [[False] * (m) for i in range(n)]
    bfs(0, 0)
    for i in range(n):
        for j in range(m):
            if graph[i][j] >= 3 :
                graph[i][j] = 0
            if graph[i][j] == 2:
                graph[i][j] = 1
    cnt +=1
print(cnt)

