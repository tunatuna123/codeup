n = int(input())
cnt = 0

for i in range(n):
    a = input()
    if len(a) <=3 or "tap" in a or "xocure" in a:
        print(a)
        cnt += 1

if cnt <= 3:
    print("safe")
elif cnt <= 6:
    print("warning")
else:
    print("danger")