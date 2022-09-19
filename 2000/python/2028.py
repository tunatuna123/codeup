n = int(input())

def getDivs(N):
    factors = {1}
    maxP  = int(N**0.5)
    p,inc = 2,1
    while p <= maxP:
        while N%p==0:
            factors.update([f*p for f in factors])
            N //= p
            maxP = int(N**0.5)
        p,inc = p+inc,2
    if N>1:
        factors.update([f*N for f in factors])
    return len(factors)

cnt = 1
total = 0
while True:
    total += cnt
    if getDivs(total) > n:
        print(total)
        break
    cnt += 1