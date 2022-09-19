#include <stdio.h>

int main(){
    int h,r;
    scanf("%d %d", &h,&r);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < h; j++)
        {
            for (int k = 0; k < j; k++)
            {
                printf(" ");
            }
            printf("*\n");
        }
        for (int j = h-1; j > 0; j--)
        {
            for (int k = 0; k < j-1; k++)
            {
                printf(" ");
            }
            printf("*\n");
        }
        
    }
    
}