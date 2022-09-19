def dis(a,b,c,d):
    return ((a-b)**2 + (c-d)**2)**(1/2)

lst = []
n = int(input())
ans = 0

for i in range(n):
    lst.append(list(map(int,input().split())))

for i in range(n-1):
    ans += dis(lst[i][0], lst[i+1][0], lst[i][1], lst[i+1][1])

print('%.2f'%ans)