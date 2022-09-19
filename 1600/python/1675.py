lst = list(map(str,input()))
for i in lst:
    if i != " ":
        if ord(i) <= 99:
            print(chr(ord(i)+23),end='')
        else:
            print(chr(ord(i)-3),end='')
    else:
        print(i, end='')