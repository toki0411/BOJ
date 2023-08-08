N = int(input())
dp = [0] * (N+1)
arr = [list(map(int, input().split())) for _ in range(N)]

for i in range (N-1, -1, -1):
    if i + arr[i][0] > N:
        dp[i] = dp[i+1]
    else:
        dp[i] = max(dp[i+1], dp[i+arr[i][0]]+ arr[i][1])

print(dp[0])
