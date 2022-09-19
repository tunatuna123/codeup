a,b = map(int,input().split())
c,d = map(int,input().split())
x,y = map(int,input().split())

if a<=x and b<=y and c>=x and d>=y:
    print("충돌")
else:
    print("비충돌")