lst = [['*','x','*'],[' ','x','x'],['*',' ','*']]
n = int(input())

for i in range(3):
    for k in range(n):
        for j in range(3):
            print(lst[i][j]*n, end="")
        print()