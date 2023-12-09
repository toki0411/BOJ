from collections import deque
t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    idx = m
    arr = list(map(int, input().split()))
    q = deque(arr)
    arr.sort()
    cnt = 1
    while len(q) != 0:
        a = q.popleft()
        if idx == 0:
            if a == arr[-1]:
                print(cnt)
                break
        if a != arr[-1]:
            q.append(a)
            idx -=1
        else :
            del arr[-1]
            cnt +=1
            idx -=1
        if idx < 0:
            idx = len(q) -1
