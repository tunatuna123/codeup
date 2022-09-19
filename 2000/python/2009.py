k,n = map(int,input().split())
ame = 0
while k >= n:
    t = k // n
    ame += t
    k += t
    k -= t*n
print(ame)