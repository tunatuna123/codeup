from re import L


n = int(input())
lst = list(map(int,input().split()))
lst2 = lst.copy()
lst3 = lst.copy()

cnt_s = 0
cnt_r = 0
lst2.sort()
lst3.sort(reverse=True)
for i in range(n):
    if lst[i] == lst2[i]:
        cnt_s += 1
    if lst[i] == lst3[i]:
        cnt_r += 1

if cnt_s == n and cnt_r != n:
    print("오름차순")
elif cnt_r == n and cnt_s != n:
    print("내림차순")
else:
    print("섞임")

