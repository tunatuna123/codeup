from math import *
b,n = map(int,input().split())
t = b**(1/n)
t1 = floor(t)
t2 = ceil(t)
t3 = t1**n
t4 = t2**n
if b-t3 >= t4-b:
    print(t2)
else:
    print(t1)