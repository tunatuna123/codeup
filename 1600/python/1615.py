self_number = [x for x in range(1,5001)]
start,end = map(int,input().split())
ans = 0

for i in range(1,5000):
    if i+sum(map(int,list(str(i)))) in self_number:
        self_number.remove(i+sum(map(int,list(str(i)))))

for i in range(start,end+1):
    if i in self_number:
        ans += i

print(ans)