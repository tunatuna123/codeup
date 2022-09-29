n = int(input())
dic = {}
ans_dic = {}
name = []
ans = []
for i in range(n):
    a = input().split(',')
    dic[a[0]] = [a[3:],0]
    name.append(a[0])

for i in range(n):
    for j in dic[name[i]][0]:
        dic[j][1] += 1

for i in range(n):
    ans_dic[name[i]] = dic[name[i]][1]

largest = sorted(ans_dic.items(), key=lambda item: item[1], reverse=True)[0][1]
for i in name:
    if ans_dic[i] == largest:
        ans.append(i)
for i in sorted(ans):
    print(i)