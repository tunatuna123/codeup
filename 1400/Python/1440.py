n = int(input())
lst = list(map(int,input().split()))

for i in range(n):
    compare = lst[i]
    print(str(i+1)+": ", end="")
    for j in range(n):
        if j != i:
            if lst[j] > compare:
                print("< ", end='')
            elif lst[j] < compare:
                print("> ", end='')
            else:
                print("= ", end='')
    print()