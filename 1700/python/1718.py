ans = 0
n = input().replace("C","").split("H")

for i in range(len(n)):
    if n[i] == "":
        n[i]=1

print(12*int(n[0])+int(n[1]))