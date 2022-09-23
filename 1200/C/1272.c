#include <stdio.h>

int main(){
    int a;
    int sum = 0;
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &a);
        if (a%2==0)
        {
            sum += a/2*10;
        }
        else
        {
            sum += (a+1)/2;
        }
        
    }
    printf("%d", sum);
}