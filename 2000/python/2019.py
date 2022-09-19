from cmath import sqrt

a,b,c = map(float,input().split())

x = (-b+sqrt(b**2-4*a*c))/(2*a)
x2 = (-b-sqrt(b**2-4*a*c))/(2*a)
d = b**2-4*a*c

if d < 0:
    print("%.2f+%.2fi"%(x.real,abs(x.imag)))
    print("%.2f-%.2fi"%(x.real,abs(x.imag)))

if d== 0:
    print("%.2f"%x.real)

if d > 0:
    print("%.2f"%x.real)
    print("%.2f"%x2.real)