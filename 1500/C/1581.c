#include <stdio.h>

void myswap(int *a, int *b){
    int temp = *a;
    if (*a>*b)
    {
        *a = *b;
        *b = temp;
    }
    
}

main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    myswap(&a, &b);
    printf("%d %d", a, b);
}