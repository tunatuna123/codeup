arr = []
for i in range(5):
    arr.append(list(map(int,input().split())))
lst = []
total = 0

for i in range(3):
    for j in range(3):
        for k in range(3):
            for t in range(3):
                total += arr[i+k][j+t]
        lst.append(total)
        total = 0

print(max(lst))