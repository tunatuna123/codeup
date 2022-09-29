n = int(input())
lst = list(map(int, input().split()))
sorted_lst = sorted(lst, reverse=True)

for i in range(n):
    print(lst[i], sorted_lst.index(lst[i])+1)
