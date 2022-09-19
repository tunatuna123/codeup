lst = input().split(",")
for i in lst:
    print(i.replace(" ","").replace(";","\n"), end=" ")