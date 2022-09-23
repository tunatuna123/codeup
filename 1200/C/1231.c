#include <stdio.h>

int main(){
    int a,b;
    char k;
    scanf("%d%c%d", &a,&k,&b);

    switch (k)
    {
    case '+':
        printf("%d", a+b);
        break;

    case '-':
        printf("%d", a-b);
        break;

    case '*':
        printf("%d", a*b);
        break;

    case '/':
        printf("%.2f",(float)a/b);
        break;

    default:
        break;
    }
}