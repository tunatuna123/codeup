kor_dic = {'1':'일', '2':'이', '3':'삼', '4':'사', '5':'오', '6':'육', '7':'칠', '8':'팔', '9':'구', '0':''}
unit_list = ['', '십', '백', '천', '', '십', '백', '천', '', '십']

ans = []
num = input()

for i in num[::-1]:
    ans.insert(0,kor_dic[i])
point_ans = ans.copy()

#뒤의 0은 무시, 앞은 무시하면 안됨
k = list(num)
k.reverse()
point = 0
for i in range(len(k)):
    if k[i] != "0":
        point = len(k)-i
        break

prt_ans = []
cnt = 0
for i in range(len(ans)):
    if ans[i] != '':
        prt_ans.append(ans[i])
    try:
        if len(ans)-i-1 == 4 and i<=point and (prt_ans[-2] != '억' and prt_ans[-1] != "억"):
            prt_ans.append('만')
    except:
        if len(ans)-i-1 == 4 and i<=point:
            prt_ans.append('만')
    if len(ans)-i-1 == 8 and i<=point:
        prt_ans.append('억')
    if ans[i] != '':
        prt_ans.append(unit_list[len(ans)-cnt-1])
    cnt += 1

for i in prt_ans:
    print(i,end='')

if num == '0':
    print("영")