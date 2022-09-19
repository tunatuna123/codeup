a = int(input())
numlist = list(map(int,input().split()))
num = int(input())
n = 0
for nl1 in numlist:
    k = nl1%num
    numlist[n] = k
    n += 1
numlist.sort()
cnt = 0 
for i in range(len(numlist)-1):
    if numlist[i] == numlist[i+1]:
        cnt = 1
        break
if cnt == 1:
    print('no')
else:
    print('yes')