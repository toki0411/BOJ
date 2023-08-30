n = int(input())
arr=[list(input().split()) for _ in range(n)]
tree = {}
for i in range(n):
    idx = ord(arr[i][0]) - 65
    tree[arr[i][0]] = [arr[i][1], arr[i][2]]
def Preorder(root):  #전위
    if root != '.':
        print(root, end='')
        Preorder(tree[root][0])
        Preorder(tree[root][1])
def Inorder(root):  #전위
    if root != '.':
        Inorder(tree[root][0])
        print(root, end='')
        Inorder(tree[root][1])

def Postorder(root):  #전위
    if root != '.':
        Postorder(tree[root][0])
        Postorder(tree[root][1])
        print(root, end='')

Preorder('A')
print()
Inorder('A')
print()
Postorder('A')