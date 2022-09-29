n = int(input())
boy = 0
girl = 0
for i in range(n):
    a = input().split(',')
    if a[1] == "F":
        girl+=1
    else: 
        boy += 1

print(boy)
print(girl)