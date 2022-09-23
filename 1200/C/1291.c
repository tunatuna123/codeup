#include <stdio.h>

int gcd(int p, int q){
    if(p==0) return q; return gcd(q%p, p);
}

int main(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    printf("%d", gcd(gcd(a,b),c));
}