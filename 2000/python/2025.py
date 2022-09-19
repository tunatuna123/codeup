import collections

a,b,c = map(str,input().split("/"))

if collections.Counter(sorted(list(a))) == collections.Counter(sorted(list(b+c))):
    print("yes")
else:
    print("no")