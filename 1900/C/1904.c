#include <stdio.h>

void f(int a, int b){
    if (a>b)
    {
        return;
    }
    if (a % 2 == 1)
    {
        printf("%d ", a);
    }
    f(a+1,b);
}

int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    f(a,b);
}