#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 6; j > 0; j--)
        {
            if (i+j == n)
            {
                printf("%d %d\n", i,j);
            }
            
        }
        
    }
    
}