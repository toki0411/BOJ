import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)
from collections import deque
N, M = map(int, input().split())
ladder = [0 for _ in range(101)]
snake = [0 for _ in range(101)]
visited = [-1] * (101)
time = [0] * (101)
for _ in range(N):
    a, b = map(int, input().split())
    ladder[a]=b
for _ in range(M):
    a, b = map(int, input().split())
    snake[a]=b


q = deque([[1,0]])
while q:  # q가 빌때까지 돈다.
    x = q.popleft()  # 큐에 있는 첫번째 값 꺼낸다
    nx = x[0]
    t = x[1]
    for i in range(1, 7):  # 1부터 N까지 돈다
        k = nx+i
        if k <= 100 and ladder[k] != 0:
            k = ladder[k]
        elif k <= 100 and snake[k] != 0:
            k = snake[k]

        if k <= 100 and visited[k] == -1:
            q.append([k, t+1])
            visited[k] = nx
            time[k] = t+1

print(time[100])
