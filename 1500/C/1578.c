#include <stdio.h>

int mymax(int n, int m){
    if (n>m)
    {
        return n;
    }
    else
    {
        return m;
    }
    
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", mymax(a, b));
}