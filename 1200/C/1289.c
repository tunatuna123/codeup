#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    int max = a*b;

    for (int i = 0; i < 2; i++)
    {
        scanf("%d %d", &a,&b);
        if (a*b > max)
        {
            max = a*b;
        }
        
    }
    printf("%d", max);
}