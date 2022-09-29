n = int(input())
cnt = 0

for i in range(n):
    lst = list(map(int,input().split()))
    if min(lst[:3]) != lst[-1]:
        print(i+1,min(lst[:3]))
        cnt += 1
        break

if cnt == 0:
    print(-1)