import sys
sys.setrecursionlimit(10**6) # 자기 호출 개수 제한

N = int(input())
graph = [[] for _ in range(N + 1)]

for _ in range(N-1):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

visited = [0] * (N + 1)

def dfs(V):
    for i in graph[V]:
        if visited[i] == 0:
            visited[i] = V
            dfs(i)
dfs(1)

for i in range(2, N+1):
    print(visited[i])


