n = int(input())
lst = []
re = []
av = 0
sum_sc = 0

score = {'A+' : 4.30,
'A0' : 4.00,
'A-' : 3.70,
'B+' : 3.30,
'B0' : 3.00,
'B-' : 2.70,
'C+' : 2.30,
'C0' : 2.00,
'C-' : 1.70,
'D+' : 1.30,
'D0' : 1.00,
'D-' : 0.70,
'F': 0.00,
'Pass': 4.3,
'Fail': 0.0}

def ans_grade(sc):
    if sc>=4.3:
        return 'A+'
    if sc >= 4.00:
        return 'A0'
    if sc >= 3.70:
        return 'A-'
    if sc >= 3.30:
        return 'B+'
    if sc >= 3.00:
        return 'B0'
    if sc >= 2.70:
        return 'B-'
    if sc >= 2.30:
        return 'C+'
    if sc >= 2.00:
        return 'C0'
    if sc >= 1.70:
        return 'C-'
    if sc >= 1.30:
        return 'D+'
    if sc >= 1.00:
        return 'D0'
    if sc >= 0.70:
        return 'D-'
    else:
        return 'F'

for i in range(n):
    lst.append(input().split())

for i in range(n):
    if 'C' in lst[i][1] or 'D' in lst[i][1] or 'F' in lst[i][1] or 'Fail' in lst[i][1]:
        re.append(lst[i])
    sum_sc += float(lst[i][2])
    av += (float(lst[i][2])*(score[lst[i][1]]))


print("Average : %.2f (%s)"%((av/sum_sc),ans_grade(av/sum_sc)))
print()
print('RETAKE NEEDED (%d)'%len(re))
for i in re:
    print(" %s (%s)"%(i[0], i[1]))
