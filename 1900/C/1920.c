#include <stdio.h>

void f(int n){
    if (n == 0)
    {
        return;
    }
    else
    {
        f(n>>1);
        printf("%d", n%2);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("%d", 0);
    }
    
    f(n);
}