from math import gcd
a,b = map(int,input().split())
l = gcd(b,a)

print("{0} {1}".format(a//l, b//l))