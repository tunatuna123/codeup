key = list(input())
p_num = input().split()
dic = {}

for i in range(len(key)):
    dic[key[i]] = i

for i in range(3):
    for j in p_num[i]:
        print(dic[j], end="")
    print(" ", end="")