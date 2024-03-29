N = int(input())
arr = [[0] * 3 for _ in range(N)]
for i in range(0, N):
    arr[i] = list(map(int, input().split()))

for i in range(1, N):
    # R
    arr[i][0] = min(arr[i - 1][1], arr[i - 1][2]) + arr[i][0]
    # G
    arr[i][1] = min(arr[i - 1][2], arr[i - 1][0]) + arr[i][1]
    # B
    arr[i][2] = min(arr[i - 1][1], arr[i - 1][0]) + arr[i][2]
print(min(arr[N - 1][0], arr[N - 1][1], arr[N - 1][2]))
