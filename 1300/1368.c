#include <stdio.h>

int main(){
    int h,w;
    char d;
    scanf("%d %d %c", &h,&w,&d);

    for (int i = h; i > 0; i--)
    {
        if (d == 'R')
        {
            for (int j = 0; j < i-1; j++)
            {
                printf(" ");
            }
        }
        else
        {
            for (int j = h-1; j > i-1; j--)
            {
                printf(" ");
            }
        }
        for (int k = 0; k < w; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}