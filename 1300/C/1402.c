#include <stdio.h>

int main(){
    int n;
    int lst[1000] = {};
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &lst[i]);
    }
    
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ", lst[i]);
    }
    
}