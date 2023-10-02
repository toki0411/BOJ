import sys
input = sys.stdin.readline

n, m = map(int, input().split())
arr = [[0] * (n+1)]
for _ in range(n):
    a = [0]+list(map(int, input().split()))
    arr.append(a)
#행 더하기
for i in range(1, n+1):
    for j in range(1, n):
        arr[i][j+1] += arr[i][j]
#열 더하기
for i in range(1, n+1):
    for j in range(1, n):
        arr[j+1][i] += arr[j][i]

for i in range(m):
    x1, y1, x2, y2 = map(int, input().split())
    ans = arr[x2][y2]- arr[x1-1][y2] - arr[x2][y1-1] + arr[x1-1][y1-1]
    print(ans)

