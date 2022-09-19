#include <stdio.h>

void num(int a){
    if (a <= 0)
    {
        return;
    }
    num(a-1);
    printf("%d ", a);
}

int main(){
    int n;
    scanf("%d", &n);
    num(n);
}