from math import gcd

a,b,c = map(int,input().split())
print(gcd(a,gcd(b,c)))