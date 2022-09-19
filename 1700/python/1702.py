grade,cl,num = map(str,input().split())

if int(cl)%2==0:
    for i in range(2):
        print(grade+cl+num, end=" ")
else:
    print(grade+cl+num, end=" ")