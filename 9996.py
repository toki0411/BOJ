n = int(input())
pattern = input()
pre = ''
suf = ''
flag = False
for i in range(len(pattern)):
    if pattern[i] == '*' :
        flag = True
    elif flag:
        suf += pattern[i]
    else :
        pre += pattern[i]


for i in range(n):
    s = input()
    # print(s[:len(pre)], s[len(s)-len(suf):])
    if len(s) < len(pre+suf):
        print("NE")
    elif s[:len(pre)] == pre and s[len(s)-len(suf):] == suf:
        print("DA")
    else :
        print("NE")