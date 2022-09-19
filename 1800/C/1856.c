#include <stdio.h>

long long int stair(int a){
    if (a==1)
    {
        return 1;
    }
    if (a==2)
    {
        return 2;
    }
    if (a==3)
    {
        return 4;
    }
    return stair(a-3)+stair(a-2)+stair(a-1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%lld", stair(n));
}