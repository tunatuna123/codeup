#include <stdio.h>

int main(){
    int a,b;
    int m,n;
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        m = a;
        n = b;
    }
    else
    {
        m = b;
        n = a;
    }
    if (m%n==0)
    {
        printf("%d*%d=%d", n,m/n,m);
    }
    else
    {
        printf("none");
    }
    
}