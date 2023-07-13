n = int(input())
arr = []

for i in range (n):
    num = int(input())
    arr.append(num)

arr.sort(reverse=True)
max_weight = arr[0]
for i in range (1,n):
    weight = arr[i] * (i+1)
    if(weight > max_weight):
        max_weight = weight

print(max_weight)


