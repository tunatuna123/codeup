#include <stdio.h>

void f(int a){
    if (a >= 1)
    {
        printf("%d\n", a);
        f(a-1);
    }
    
}

int main(){
    int n;
    scanf("%d", &n);
    f(n);
}