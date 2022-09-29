n = int(input())
dic = {}
for i in range(n):
    a = input().split(',')
    dic[a[0]]=a[2]
print(dic[input()])