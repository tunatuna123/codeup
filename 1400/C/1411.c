#include <stdio.h>

int main(){
    int n,a;
    int sum;

    scanf("%d", &n);
    sum = n*(n+1)/2;

    for (int i = 0; i < n-1; i++)
    {
        scanf("%d", &a);
        sum -= a;
    }
    printf("%d", sum);
}