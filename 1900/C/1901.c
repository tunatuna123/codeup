#include <stdio.h>

int k = 1;

void ans(int a){
    if (a >= 1)
    {
        printf("%d\n", k);
        k++;
        ans(a-1);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    ans(n);

    return 0;
}