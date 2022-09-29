word = input()
start,n = map(int,input().split())
for i in range(n):
    print(word[start+i], end='')