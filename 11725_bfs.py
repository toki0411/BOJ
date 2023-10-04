import sys
from collections import deque
sys.setrecursionlimit(10**6) # 자기 호출 개수 제한

N = int(input())
graph = [[] for _ in range(N + 1)]

for _ in range(N-1):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

q = deque()
q.append(1)

ans = [0] * (N + 1)
def bfs():
    while q:
        V = q.popleft()
        for i in graph[V]:
            if ans[i] == 0:
                ans[i] = V
                q.append(i)

bfs()

for i in range(2, N+1):
    print(ans[i])


