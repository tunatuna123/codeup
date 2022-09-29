n = int(input())
ans = 0
for i in range(n):
    a = input().split(",")
    ans += int(a[2])

print("%.2f"%round(ans/n, 2))