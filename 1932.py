n = int(input())
arr=[]
for i in range(n):
    arr.append(list(map(int, input().split())))

for i in range(1, n):
    edge = len(arr[i])
    for k in range(edge):
        if(k==0):
            arr[i][k] = arr[i-1][k] + arr[i][k]
        elif(k==edge-1):
            arr[i][k] = arr[i-1][k-1] + arr[i][k]
        else :
            arr[i][k] = max(arr[i-1][k-1], arr[i-1][k]) + arr[i][k]
print(max(arr[n-1]))