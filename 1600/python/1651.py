w,h,n = map(int,input().split())
for i in range(n):
    lst = list(input())
    for i in range(h):
        for j in lst:
            print(j*w,end="")
        print()