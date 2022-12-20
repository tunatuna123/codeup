#include <stdio.h>

int check[1000] = {};
long long dynamic[1000] = {};

long long fib(int a){
    if (check[a]==1)
    {
        return dynamic[a];
    }
    check[a] = 1;
    if (a <= 2)
    {
        return dynamic[a] = 1;
    }
    return dynamic[a] = (fib(a-2)+fib(a-1))%10009;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%lld", fib(n));
}