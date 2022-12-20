#include <stdio.h>

long long int a,b;
long long int ans = 1;

long long int f(long long int p, long long int q){
    if (q > 0)
    {
        ans *= p;
        f(p,q-1);
    }
    else
    {
        return ans;
    }
}

int main(){
    scanf("%lld %lld", &a,&b);
    if (a == 0)
    {
        printf("0");
    }
    else if (a == 1 || b == 0)
    {
        printf("1");
    }
    
    else if (b == 1)
    {
        printf("%lld", a);
    }
    
    else
    {
        f(a,b);
        printf("%lld", ans);
    }
}