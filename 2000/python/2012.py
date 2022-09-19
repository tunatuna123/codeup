a,b = map(int,input().split())
lst = []
for i in range(a,b+1):
    for j in str(i):
        lst.append(j)

print(lst.count("1"))