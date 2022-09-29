n = int(input())
dic = {}

for i in range(n):
    a = input().split(',')
    dic[a[0]] = [a[1], a[3:]]
name = input()

boy = 0
girl = 0
for i in dic[name][1]:
    if dic[i][0] == "F":
        girl += 1
    else:
        boy += 1
print(boy)
print(girl)