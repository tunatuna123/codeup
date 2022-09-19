from sys import stdin
lst = list(map(int,stdin.readline().rstrip()))
if sum(lst)%3==0:
    print("1")
else:
    print(0)