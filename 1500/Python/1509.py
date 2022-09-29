arr=[]
for i in range(10):
    arr.append(list(map(int,input().split())))
piece = list(map(int,input().split()))
lst = [x for x in range(1,11)]
dic = {}

for i in range(10):
    total = 0
    for j in range(10):
        k = arr[9-j][i]
        
        if arr[9-j][i] < 0 and piece[i] != 0:
            dic[i+1]="fall"
        if arr[9-j][i] > 0 and piece[i] != 0:
            dic[i+1]="crash"

for i in lst:
    dic[i] = "safe"

for i in range(10):
    if piece[i] != 0:
        print(i+1,dic[i+1])