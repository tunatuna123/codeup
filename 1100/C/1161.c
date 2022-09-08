#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    printf("%s", a%2==0 ? "짝수":"홀수");
    printf("+");
    printf("%s", b%2==0 ? "짝수":"홀수");
    printf("=");
    printf("%s", (a+b)%2==0 ? "짝수":"홀수");
}