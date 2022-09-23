#include <stdio.h>

int main(){
    int n,a;
    scanf("%d", &n);
    if (n == 1)
    {
        scanf("%d", &a);
        printf("%d %d %d", a,a,a);
    }
    
    else{

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (i==1)
        {
            printf("%d ", a);
        }
        else if (i == (n+1)/2)
        {
            printf("%d ", a);
        }
        else if (i == n){
            printf("%d", a);
        }
    }
    }
    
}