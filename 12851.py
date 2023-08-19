import sys
from collections import deque
sys.setrecursionlimit(10**6)

n, k = map(int, input().split())
dx = [-1, 1, 2]
visited = [0] * (100001)
cnt = 0
def bfs(v):
    global cnt
    flag = False
    q = deque([v])
    while q:
        x = q.popleft()
        if x == k:
            cnt += 1
            if not flag:
                print(visited[x])
                flag = True
            continue

        for i in dx:
            if i == 2:
                nx = x * i
            else:
                nx = x + i
            if nx <= 100000 and nx >= 0 :
                if not visited[nx] or visited[nx] == visited[x] + 1:
                    q.append(nx)
                    visited[nx] = visited[x] + 1

bfs(n)
print(cnt)