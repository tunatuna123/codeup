#include <stdio.h>

int main(){
    int n;
    int lst[100]={};
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &lst[i]);
    }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\n", lst[j]);
        }
        
    }
    
}