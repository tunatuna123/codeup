m,d = map(int,input().split())
ans = 0

for i in range(m,10):
    if i%2==0:
        ans += 30
    else:
        ans += 31

print(ans+(30-d))