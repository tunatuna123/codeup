n = int(input())
dic = {}
friend_set = set()
cnt = 0

for i in range(n):
    a = input().split(',')
    dic[a[0]] = a[3:]
name = input()
friend_set.update(tuple(dic[name]))

for i in dic[name]:
    friend_set.update(tuple(dic[i]))

if name in friend_set:
    print(len(friend_set)-1)
else:
    print(len(friend_set))