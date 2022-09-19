c,r = map(int,input().split())
cell_c,cell_r = map(int,input().split())

arr = [[0]*r*cell_r for i in range(c*cell_c)]

for i in range(c*cell_c):
    for j in range(r*cell_r):
        if ((i//cell_c)+(j//cell_r))%2==0:
            arr[i][j]="X"
        else:
            arr[i][j]="."

for i in range(c*cell_c):
    for j in range(r*cell_r):
        print(arr[i][j], end="")
    print()