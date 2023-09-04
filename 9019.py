import sys
input = sys.stdin.readline
from collections import deque

def bfs(V, command):
    q = deque()
    q.append([V, command])
    while q:
        x, s = q.popleft()
        if x == b:
            print(s)
            break

        num = (2 * x) % 10000
        if not visited[num]:
            visited[num] = True
            q.append([num, s + 'D'])

        num = (x - 1) % 10000
        if not visited[num]:
            visited[num] = True
            q.append([num, s + 'S'])

        num = (x % 1000) * 10 + x // 1000
        if not visited[num]:
            visited[num] = True
            q.append([num, s + 'L'])

        num = x // 10 + (x % 10) * 1000
        if not visited[num]:
            visited[num] = True
            q.append([num, s + 'R'])

n = int(input())
for _ in range(n):
    a, b = map(int, input().split())
    visited = [False for i in range(10001)]
    visited[a] = True
    bfs(a, '')

