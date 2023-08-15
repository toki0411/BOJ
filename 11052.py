n = int(input())
arr = list(map(int, input().split()))
dp = [0] * (1001)
dp[0] = arr[0]

for i in range(1, n):
    d=[]
    for j in range(0, i+1):
        sum = 0
        if(j==0):
            sum = dp[0] * (i+1)
        elif j==i:
            sum = arr[i]
        else:
            print(j, i, dp[j], dp[i-j-1])
            sum = dp[j] + dp[i-j-1]
        d.append(sum)
    dp[i] = max(d)
print(dp[n-1])
