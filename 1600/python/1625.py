n=int(input())


def sum_each_value(k):
    if int(k) < 10:
        return k
    else:
        return sum_each_value(sum(list(map(int,str(k)))))

for i in range(n):
    print(sum_each_value(input()))