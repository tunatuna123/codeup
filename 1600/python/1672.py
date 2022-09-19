n,k = map(int,input().split())

if n//k > 9999:
    print("번호 초과 오류")
else:
    for i in range(n//k):
        print("F-"+str(i+1).zfill(4))
