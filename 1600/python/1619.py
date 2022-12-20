num = int(input())
num_lst = list(map(int, str(num)))

if num%sum(num_lst) == 0:
    print("Yes")
else:
    print("No")