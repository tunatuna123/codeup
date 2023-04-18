import sys
from math import sqrt
input = sys.stdin.readline

n = int(input())

def GetPrimeEratosthenes(n):
    chk = [True]*(n+1)
    res = []
    chk[0], chk[1] = False, False
    for i in range(2, int(sqrt(n))+1):
        if chk[i]:
            res.append(i)
            j = 2
            while i*j <= n:
                chk[i*j] = False
                j += 1
    res = [x for x in range(n+1) if chk[x]]
    return res

print(sum(GetPrimeEratosthenes(n)))