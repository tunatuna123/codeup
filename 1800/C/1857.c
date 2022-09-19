#include <stdio.h>

int combi(int p,int q){
    if (q == 1)
    {
        return p;
    }
    if (q>p)
    {
        return 0;
    }
    if (q==0 || p==q)
    {
        return 1;
    }
    return combi(p-1,q-1)+combi(p-1,q);
}

int main(){
    int n,r;
    scanf("%d %d", &n,&r);
    printf("%d", combi(n,r));
}