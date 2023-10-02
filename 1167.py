import sys
input = sys.stdin.readline
sys.setrecursionlimit(10 ** 5)  # 자기 호출 개수 제한
n = int(input())
graph = [[] for _ in range(n + 1)]

for i in range(1, n+1):
    arr = list(map(int, input().split()))
    for k in range(1, len(arr)-1, 2):
        graph[arr[0]].append([arr[k], arr[k+1]])

def dfs(V):
    for a, b in graph[V]:
        if visited[a]==-1:
            visited[a] = visited[V] + b
            dfs(a)

visited = [-1] * (n + 1)
visited[1] = 0
dfs(1)
start = visited.index(max(visited))

visited = [-1] * (n + 1)
visited[start] = 0
dfs(start)
print(max(visited))

