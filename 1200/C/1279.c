#include <stdio.h>

int main(){
    int a,b, sum=0;
    scanf("%d %d", &a,&b);

    for (int i = a; i <= b; i++)
    {
        if (i%2==0)
        {
            sum -= i;
        }
        else{
            sum += i;
        }
    }
    printf("%d", sum);
}