
#include <stdio.h>
int mymin(int n, int m){
    if (n<m)
    {
        return n;
    }
    else
    {
        return m;
    }
    
}
main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", mymin(a, b));
}