#include <stdio.h>

int main(){
    int n, sum=0;
    scanf("%d", &n);

    while (n > 9)
    {
        sum++;
        n = n/10;
    }
    printf("%d", sum+1);
}