#include <stdio.h>

int main(){
    int n;
    unsigned int total=1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        total *= i;
    }
    printf("%u", total);
}