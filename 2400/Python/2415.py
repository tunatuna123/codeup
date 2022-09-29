n = int(input())
dic = {}
for i in range(n):
    a = input().split(',')
    dic[a[0]] = a[3:]
name = input()
for i in dic[name]:
    print(i)