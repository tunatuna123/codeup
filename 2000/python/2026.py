a = input()
n = int(a, 16)
if len(format(n,'b'))%4 != 0:
    ans = '0'*(4-(len(format(n,'b'))%4)) + format(n, 'b')
else:
    ans = format(n, 'b')

for i in range(len(ans)):
    if i!=0 and i%4==0:
        print(" ", end="")
    print(ans[i], end="")