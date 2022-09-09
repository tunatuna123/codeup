#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n-1)
        {
            for (int i = 0; i < n; i++)
            {
                printf("*");
            }
            
        }
        else
        {
            printf("*");
            for (int i = 0; i < n-2; i++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}