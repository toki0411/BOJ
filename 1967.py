import sys
input = sys.stdin.readline
sys.setrecursionlimit(10 ** 5)  # 자기 호출 개수 제한
n = int(input())

visited = [-1] * (n + 1)
visited[1] = 0
graph = [[] for _ in range(n + 1)]
for i in range(n-1):
    p, c, v = map(int, input().split())
    graph[p].append([c, v])
    graph[c].append([p, v])
def dfs(V, cnt):
    for a, b in graph[V]:
        if visited[a]==-1:
            visited[a] = cnt + b
            dfs(a, cnt + b)
dfs(1,0)
start = visited.index(max(visited))
visited = [-1] * (n + 1)
visited[start] = 0
dfs(start, 0)
print(max(visited))


