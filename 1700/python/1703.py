n = int(input())

s = n%60
n -= s
m = n/60
n -= m*60
h = n/60
print(int(h),int(m),int(s))