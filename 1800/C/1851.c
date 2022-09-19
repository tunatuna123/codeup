#include <stdio.h>

void star(int k){
    if (k <= 0)
    {
        return;
    }
    star(k-1);
    printf("*");
}

int main(){
    int n;
    scanf("%d", &n);
    star(n);
}