s1, s2 = input().split()

ans = 50
for i in range(len(s2) - len(s1) + 1):
    cnt = 0
    for j in range(len(s1)):
        if s1[j] != s2[i + j]:
            cnt += 1
    ans = min(ans, cnt)
print(ans)
