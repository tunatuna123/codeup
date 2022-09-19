import collections

n = int(input())
lst = []

for i in range(n):
    lst.append(int(input()))

dic = dict(sorted(collections.Counter(lst).items()))
ans = sorted(dic.items(), key=lambda x: x[1], reverse=True)

point = 0
point_end = 0
for i in range(1,len(ans)):
    if ans[0][1] != ans[i][1]:
        point = i
        break

for i in range(1,len(ans)):
    if ans[i][1] == ans[point][1]:
        point_end = i

max_sum = 0
for i in range(point,point_end+1):
    print(ans[i])
    if abs(ans[point-1][0]-ans[i][0]) > max_sum:
        max_sum = abs(ans[point-1][0]-ans[i][0])
print(max_sum)