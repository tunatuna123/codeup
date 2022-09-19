#include <stdio.h>

long long int fib(int k){
    if (k<=2)
    {
        return 1;
    }
    return fib(k-1)+fib(k-2);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%lld", fib(n));
}