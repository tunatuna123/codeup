#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if (b-c>a)
    {
        printf("advertise");
    }
    else if (b-c<a)
    {
        printf("do not advertise");
    }
    else printf("does not matter");
}