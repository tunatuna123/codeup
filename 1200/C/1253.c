#include <stdio.h>

int main(){
    int a,b;
    int n,m;
    scanf("%d %d", &a,&b);
    if (a>b)
    {
        n = a;
        m = b;
    }
    else
    {
        n = b;
        m = a;
    }


    for (int i = m; i <= n; i++)
    {
        printf("%d ", i);
    }
    
}