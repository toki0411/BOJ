n, m, r = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(n)]

for k in range(r):
    for j in range(min(n, m) // 2):
        value = arr[j][j]

        # 아래로
        for i in range(j + 1, n - j):
            tmp = arr[i][j]
            arr[i][j] = value
            value = tmp

        # 오른쪽으로
        for i in range(j + 1, m - j):
            tmp = arr[n - j - 1][i]
            arr[n - j - 1][i] = value
            value = tmp

        # 위로
        for i in range(n - j - 2, j - 1, -1):
            tmp = arr[i][m - j - 1]
            arr[i][m - j - 1] = value
            value = tmp

        # 왼쪽으로
        for i in range(m - j - 2, j - 1, -1):
            tmp = arr[j][i]
            arr[j][i] = value
            value = tmp

for i in range(n):
    for j in range(m):
        print(arr[i][j], end=" ")
    print("")
