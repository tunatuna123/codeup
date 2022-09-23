k = int(input())
alpha = [chr((26-i)+65-1) for i in range(26)]
word = input()
for i in range(len(word)):
    if ord(word[i])-(3*(i+1)+k) < 65:
        print(chr(ord(word[i])-(3*(i+1)+k)+26), end='')
    else:
        print(chr(ord(word[i])-(3*(i+1)+k)), end='')