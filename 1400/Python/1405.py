n = int(input())
lst = list(map(int,input().split()))

for i in range(n):
    for j in lst[i:]:
        print(j,end=" ")
    for j in lst[:i]:
        print(j, end=' ')
    print()