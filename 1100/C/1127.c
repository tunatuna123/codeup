#include <stdio.h>

int main(){
    float a,b,sum=0;

    for (int i = 0; i < 3; i++)
    {
        scanf("%f %f", &a,&b);
        sum += a*b;
    }
    printf("%.1f", sum);
}