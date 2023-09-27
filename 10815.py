n = int(input())
card = list(map(int, input().split()))
m = int(input())
arr = list(map(int, input().split()))

card.sort()

def binarySearch(target):
    left = 0
    right = len(card)-1
    while left<=right:
        mid = (left+right)//2
        if card[mid] == target:
            print(1, end = " ")
            return
        elif card[mid]>target:
            right = mid-1
        else :
            left = mid+1
    print(0, end = " ")
for i in arr:
    binarySearch(i)