#include <stdio.h>

int main(){
    int max,min;
    int a;
    scanf("%d", &a);
    max = a;
    min = a;
    for (int i = 0; i < 4; i++)
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
    printf("%d\n%d", max,min);
}