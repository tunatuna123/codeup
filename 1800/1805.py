n = int(input())
dic = {}

for i in range(n):
    a,b = map(int,input().split())
    dic[a] = b
dic = sorted(dic.items())

for i in range(n):
    print(dic[i][0],dic[i][1])