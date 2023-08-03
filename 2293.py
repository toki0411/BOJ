N, K = map(int, input().split())
arr = []
dp = [0] * (K+1)
for i in range(N):
    k = int(input())
    arr.append(k)

for i in range(N):
    for l in range(arr[i], K+1):
        if(l==arr[i]):
            dp[l] +=1
        elif(l-arr[i]>0):
            dp[l] = dp[l] + dp[l-arr[i]]

print(dp[K])