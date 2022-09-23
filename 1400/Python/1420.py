n = int(input())
dic = {}
for i in range(n):
    name,score = map(str,input().split())
    dic[name] = int(score)

print(sorted(dic.items(), key = lambda item: item[1], reverse=True)[2][0])