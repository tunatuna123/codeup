#include<stdio.h>

double f(double value) {
    if (value >= 0)
        return value;
    else
        return -value;
}

int main() {
    
    double value;
    scanf("%lf", &value);
    printf("%.10g", f(value));
    return 0;
}