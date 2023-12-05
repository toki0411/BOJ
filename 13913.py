from collections import deque
n, k = map(int, input().split())
visited = [0] * (100001)
move = [0] * (100001)
arr=[]
def bfs(v):
    q = deque([v])
    while q:
        x = q.popleft()
        if x == k:
            print(visited[x])
            tmp = k
            for i in range(visited[x]):
                arr.append(tmp)
                tmp = move[tmp]
            break
        if 0 <= x-1 <= 100000 and not visited[x-1]:
            visited[x - 1] = visited[x] + 1
            move[x-1] = x
            q.append(x-1)
        if 0 < x*2 <= 100000 and not visited[x*2]:
            visited[x * 2] = visited[x] + 1
            move[x*2] = x
            q.append(x*2)
        if 0 <= x+1 <= 100000 and not visited[x+1]:
            visited[x + 1] = visited[x] + 1
            move[x+1] = x
            q.append(x+1)
bfs(n)
arr.append(n)
arr.reverse()
for i in arr:
    print(i, end=' ')
