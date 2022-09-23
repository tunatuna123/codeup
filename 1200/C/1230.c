#include <stdio.h>

int main(){
    int a,p=0;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a);
        if (a <= 170)
        {
            printf("CRASH %d", a);
            break;
        }
        else
        {
            p++;
        }
        
    }
    if (p == 3)
    {
        printf("PASS");
    }
    
}