n = input()
alphabet = [0]*26

for i in n:
    alphabet[ord(i)-97]+=1 #ord('a') = 97 이기 때문에 -97해서 list의 인덱스를 맞춤

for i in alphabet:
    print(i, end=' ')