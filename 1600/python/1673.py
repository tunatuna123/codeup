from math import gcd
a,b,c = map(int,input().split())
print(gcd(gcd(a,b),c))
