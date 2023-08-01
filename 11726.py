N = int(input())
if(N<3):
    exp = [i for i in range(1, 3)]
    print(exp[N-1]%10007)
else :
    arr = [i for i in range(1, N + 1)]
    for i in range (2, N):
        arr[i] = arr[i-1] + arr[i-2]
    print(arr[N-1]%10007)