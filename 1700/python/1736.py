global s
s = int(input())

def hms():
    global s
    day = s // 86400
    s -= day*86400
    hours = s // 3600
    s = s - hours*3600
    m = s // 60
    ss = s - m*60
    print(day, hours, m, ss)

hms()