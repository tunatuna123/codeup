#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= (n+1)/2; i++)
    {
        for (int k = 0; k < (n+1)/2-i; k++)
        {
            printf(" ");
        }
        
        for (int j = 0; j < (2*i-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}