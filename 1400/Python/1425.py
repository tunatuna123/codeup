row,column = map(int,input().split())
students = sorted(list(map(int,input().split())))
seats = [['']*column]*row
cnt = 0

for i in range(len(students)):
    if (i+column+1)%column == 0:
        print(students[cnt])
    else:
        print(students[cnt], end=' ')
    cnt += 1