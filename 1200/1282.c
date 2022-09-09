#include <stdio.h>
#include <math.h>

int main(){
    double n;
    scanf("%lf", &n);
    printf("%d %d", (int)(n-pow((int)sqrt(n),2)),(int)sqrt(n));

}