#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if (a == 0)
    {
        printf("0");
    }
    else
    {
        printf("%s", a>0 ? "양수":"음수");
    }
    
}