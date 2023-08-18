import sys
from collections import deque
sys.setrecursionlimit(10**6)

n, k = map(int, input().split())
dx = [-1, 1, 2]
visited = [0] * (100001)

def bfs(v):
    q = deque([v])
    while q:
        v = q.popleft()
        if v == k:
            return visited[v]
        for i in dx:
            if i == 2:
                x = v * i
            else:
                x = v + i
            if x <= 100000 and x >= 0 :
                if not visited[x]:
                    q.append(x)
                    visited[x] = visited[v] + 1
print(bfs(n))