
wordlist = input().split()
for i in wordlist:
    for j in range(len(i)):
        if ord(i[j])+3 > 122:
            print(chr(ord(i[j])+3-26), end='')
        else:
            print(chr(ord(i[j])+3), end='')
    print(" ", end='')