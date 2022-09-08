#include <stdio.h>

int main(){
    int m,s;
    scanf("%d %d", &m,&s);
    if (m%5==0)
    {
        printf("%d", (90-m)/5+s);
    }
    else
        printf("%d", (90-m)/5+s+1);
}