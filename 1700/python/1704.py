a,b = map(str, input().split())

if int(b[0]) <= 2:
    print(2012 -((int(a[0])*10+int(a[1]))+1900)+1, end=" ")
else:
    print(2012 - ((int(str(a)[0])*10+int(str(a)[1]))+2000)+1, end=" ")

if int(b[0])%2==0:
    print("F")
else:
    print("M")