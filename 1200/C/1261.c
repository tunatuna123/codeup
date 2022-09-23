#include <stdio.h>

int main(){
    int a, cnt = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a);
        if (a % 5 == 0)
        {
            printf("%d", a);
            break;
        }
        else
        {
            cnt++;
        }
        
    }
    if (cnt == 10)
    {
        printf("0");
    }
    
}