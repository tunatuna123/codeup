global s
s = int(input())

def hms():
    global s
    hours = s // 3600
    s = s - hours*3600
    m = s // 60
    ss = s - m*60
    print(hours, m, ss)

hms()