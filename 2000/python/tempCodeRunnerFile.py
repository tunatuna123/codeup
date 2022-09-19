a,b = map(int,input().split())

for i in range(a,b+1):
    cnt = 0
    if "3" in str(i):
        cnt += 1
    if "6" in str(i):
        cnt += 1
    if "9" in str(i):
        cnt += 1
    if cnt != 0:
        print("K"*cnt)
    else:
        print(i)