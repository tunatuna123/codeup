#include <stdio.h>
int main(){
    int n;
    int a, max=0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a > max)
        {
            max = a;
        }
        
    }
    
    printf("%d", max);
}