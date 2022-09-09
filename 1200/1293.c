#include <stdio.h>

int main(){
    int max,min;
    int a,n;
    scanf("%d", &n);
    scanf("%d", &a);
    max = a;
    min = a;
    for (int i = 0; i < n-1; i++)
    {
        scanf("%d", &a);
        if (a > max)
        {
            max = a;
        }
        else if (a < min)
        {
            min = a;
        }
        
    }
    printf("%d %d", max,min);
}