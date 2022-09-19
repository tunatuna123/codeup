a = int(input())
rev_a = int(str(a)[::-1])
if str(a+rev_a) == str(a+rev_a)[::-1]:
    print("YES")
else:
    print("NO")