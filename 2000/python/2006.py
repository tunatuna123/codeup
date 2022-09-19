a = int(input())
b = int(input())
c = int(input())
d = int(input())
s = int(input())
nikky = (s//(a+b))*(a-b)
if s%(a+b) > a:
    nikky += a*2-s%(a+b)
else:
    nikky += s%(a+b)
byron = (s//(c+d))*(c-d)
if s%(c+d) > c:
    byron += c*2-s%(c+d)
else:
    byron += s%(c+d)
if nikky > byron:
    print("Nikky")
elif nikky < byron:
    print("Byron")
else:
    print("Tied")