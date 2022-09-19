arr = [1,1]
n = int(input())

for i in range(n-2):
    arr.append(arr[arr[-1]-1]+arr[len(arr)-arr[-1]])

print(arr[-1])