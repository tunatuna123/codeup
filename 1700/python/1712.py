a,b,k = map(int,input().split())
cnt = 0

while a+(b-a)*cnt <= k:
    print(a+(b-a)*cnt, end=" ")
    cnt += 1