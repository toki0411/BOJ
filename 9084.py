t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    m = int(input())
    dp = [0] * 10001

    for i in range(n):
        for l in range(arr[i], m + 1):
            if (l == arr[i]):
                dp[l] += 1
            elif (l - arr[i] > 0):
                dp[l] = dp[l] + dp[l - arr[i]]
    print(dp[m])


