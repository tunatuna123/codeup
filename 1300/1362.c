#include <stdio.h>

int main(){
    int n, cnt;
    scanf("%d", &n);
    int std = n*(n+1)/2;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", std);
            std--;
        }
        printf("\n");
    }
    
}