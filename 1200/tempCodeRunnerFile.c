#include <stdio.h>

int main(){
    int a,b;
    char k;
    int total;
    
    scanf("%d", &total);
    while (k == '=')
    {
        scanf("%c%d",&k,&a);
        switch (k)
        {
        case '+':
            total += a;
            break;
        case '-':
            total -= a;
            break;
        case '*':
            total *= a;
            break;
        case '/':
            total /= a;
            break;
        
        default:
            break;
        }
    }
    printf("%d", total);
}