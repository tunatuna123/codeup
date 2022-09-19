lst = [[" "]*50 for i in range(50)]
w,h = map(int,input().split())

for i in range(h):
    for j in range(w):
        if i==0 or i==h-1:
            lst[i][j]="-"
        if j==0 or j==w-1:
            lst[i][j]="|"
        if (i==0 and j==0) or (i==h-1 and j==0) or (i==0 and j==w-1) or (i==h-1 and j==w-1):
            lst[i][j] = "+"

for i in range(h):
    for j in range(w):
        print(lst[i][j], end="")
    print()