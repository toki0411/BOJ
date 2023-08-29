from collections import deque
import sys
input = sys.stdin.readline

N, M, V = map(int, input().split())  #정점의 개수 N, 간선의 개수 M, 탐색을 시작할 정점의 변호 V
graph = [[] for _ in range(N + 1)]
visited2 = [0] * (N + 1)
count = 1

for _ in range(M):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

def bfs(V):
    global count
    q = deque([V])
    visited2[V] = 1

    while q:  # q가 빌때까지 돈다.
        V = q.popleft()  # 큐에 있는 첫번째 값 꺼낸다.
        graph[V].sort()
        for i in graph[V]:  # 1부터 N까지 돈다
            if visited2[i] == 0:  # 만약 해당 i값을 방문하지 않았고 V와 연결이 되어 있다면
                count+=1
                q.append(i)  # 그 i 값을 추가
                visited2[i] = count  # i 값을 방문처리
bfs(V)
for i in visited2[1:]:
    print(i)