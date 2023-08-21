n, k = map(int, input().split())
arr = [0] * (1001)
for i in range(2, n+1):
    arr[i] = i
d = [0] * (1001)
idx = 0
for i in range(2, n+1):
    sum = i
    if sum not in d:
        d[idx]=sum
        idx +=1
    for j in range(1, n//i +1):
        sum = j * i
        if sum not in d:
            d[idx] = sum
            idx +=1

print(d[k - 1])