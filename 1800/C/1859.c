#include <stdio.h>

void star(int k){
    if (k<=0)
    {
        return;
    }
    star(k-1);
    printf("*");
}

void stair(int k){
    if (k<=0)
    {
        return;
    }
    stair(k-1);
    star(k);
    printf("\n");
}

int main(){
    int n;
    scanf("%d", &n);
    stair(n);
}