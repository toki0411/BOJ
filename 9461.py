T = int(input())
arr = [1,1,1,2,2]
for i in range (5,100) :
    num = arr[i-5] + arr[i-1]
    arr.append(num)

for i in range (0,T):
    k = int(input())
    print(arr[k-1])
