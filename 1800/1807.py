a,b = map(int,input().split())
lst = [x for x in range(a,b+1)]
ans = []

for i in lst:
    cnt = 0
    while i != 0:
        if i%2==0:
            i = i/2
            cnt += 1
        else:
            i = 3*i+1
            cnt += 1
    ans.append(cnt)

print(cnt)