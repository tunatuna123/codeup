import re
dic = {"I":1, "V":5, "X":10, "L":50, "C":100, "D":500, "M":1000}
aroma = input()

sym = re.findall('[A-Z]', aroma)
num = re.findall('\d', aroma)
ans = 0

for i in range(len(num)-1):
    if dic[sym[i]] < dic[sym[i+1]]:
        ans -= dic[sym[i]]*int(num[i])
    else:
        ans += dic[sym[i]]*int(num[i])

print(ans + dic[sym[-1]]*int(num[-1]))