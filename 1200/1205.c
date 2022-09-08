#include <stdio.h>
#include <math.h>

int main(){
    int m,n;
    int b,s;
    float max;
    scanf("%d %d", &m,&n);
    if (m>n)
    {
        b = m;
        s = n;
    }
    else
    {
        b = n;
        s = m;
    }
    
    
    max = b+s;
    if (max < b-s)
    {
        max = b-s;
    }
    if (max < b*s)
    {
        max = s*b;
    }
    if (max < b/s)
    {
        max = b/s;
    }
    if (max < pow(b,s))
    {
        max = pow(b,s);
    }
    if (max < pow(s,b))
    {
        max = pow(s,b);
    }
    printf("%f", max);
}