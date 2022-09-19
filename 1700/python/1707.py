lst = list(map(int,input().split()))
cnt = 0
a = round(sum(lst)/10, 1)

print(a)
for i in lst:
    if i >= a:
        cnt += 1

print(cnt, 10-cnt)