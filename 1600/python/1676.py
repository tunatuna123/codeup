n = int(input())
lst = []
lst_2 = []
for i in range(n):
    a = int(input())
    lst.append(a)
    lst_2.append(a)

lst.sort(reverse=True)

for i in lst_2:
    print(lst.index(i)+1)
