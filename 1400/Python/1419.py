word = input()
cnt = 0

for i in range(len(word)):
    if word[i] == 'l' and len(word)-i > 3:
        if word[i+1] == 'o':
            if word[i+2] == 'v':
                if word[i+3] == 'e':
                    cnt += 1

print(cnt)