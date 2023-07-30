T = int(input())
zeroCnt = [0] * 40
oneCnt = [0] * 40
zeroCnt[0] = 1; zeroCnt[1] = 0;
oneCnt[0] = 0; oneCnt[1] = 1;

for i in range(2, 40):
    zeroCnt[i] = zeroCnt[i-1] + zeroCnt[i-2]
    oneCnt[i] = oneCnt[i-1] + oneCnt[i-2]

for i in range (0, T):
    k = int(input())
    if(k == 0):
        print(1, 0)
    elif(k==1):
        print(0, 1)
    else:
        zero = zeroCnt[k-1] + zeroCnt[k-2]
        one = oneCnt[k-1] + oneCnt[k-2]
        print(zero, one)


