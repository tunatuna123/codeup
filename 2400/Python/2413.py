n = int(input())
ans = 0
for i in range(n):
    a = input().split(',')
    ans += len(a)-3

print("%.2f"%round(ans/n, 2))