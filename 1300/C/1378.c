#include <stdio.h>

int main(){
    double n;
    scanf("%lf", &n);
    printf("%d", (int)(n*n*n+3*n*n+2*n)/6);
}