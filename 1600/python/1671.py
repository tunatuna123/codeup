a,b = map(int,input().split())
if a==b:
    print("tie")
elif a == 2 and b == 0:
    print("win")
elif a == 0 and b == 2:
    print("lose")
elif a < b:
    print("win")
else:
    print("lose")