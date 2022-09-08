#include <stdio.h>

int main(){
    double a,b,c,d;
    scanf("%lf %lf %lf %lf", &a,&b,&c,&d);
    double k = a/b;
    double t = c/d;
    if (k > t)
    {
        printf(">");
    }
    else if (k < t)
    {
        printf("<");
    }
    else{
        printf("=");
    }
}