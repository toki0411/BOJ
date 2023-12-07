import sys
import copy
from collections import deque
input = sys.stdin.readline

n, m = map(int, input().split())
graph = [list(map(int, input().split())) for _ in range(n)]
ans = []
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

def bfs():
    q = deque()
    for i in range(n):
        for j in range(m):
            if graph[i][j] == 2:
                q.append((i, j))
    graph2 = copy.deepcopy(graph)
    while q:
        x, y = q.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if 0 <= nx < n and 0 <= ny < m and graph2[nx][ny] == 0:
                q.append((nx, ny))
                graph2[nx][ny] = 2
    cnt = 0
    global result
    for i in range(n):
        for j in range(m):
            if graph2[i][j] == 0:
                cnt +=1
    result = max(result , cnt)

def wall(cnt):
    if cnt == 3:
        bfs()
        return
    for i in range(n):
        for j in range(m):
            if graph[i][j] == 0:
                graph[i][j] = 1
                wall(cnt + 1)
                graph[i][j] = 0
result = 0
wall(0)
print(result)