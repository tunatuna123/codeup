a,b = map(int,input().split())

for i in map(str,range(a,b+1)):
    cnt = 0
    cnt += list(i).count("3")
    cnt += list(i).count("6")
    cnt += list(i).count("9")
    if cnt != 0:
        print("K"*cnt)
    else:
        print(i)