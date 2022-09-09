#include <stdio.h>

int main(){
    int a,b;
    char k;
    int total;
    
    scanf("%d", &total);
    for(int i=0;;i++)
    {
        scanf("%c", &k);
        switch (k)
        {
        case '+':
            scanf("%d", &a);
            total += a;
            break;
        case '-':
            scanf("%d", &a);
            total -= a;
            break;
        case '*':
            scanf("%d", &a);
            total *= a;
            break;
        case '/':
            scanf("%d", &a);
            total /= a;
            break;
        case '=':
            printf("%d", total);
            return 0;
            break;

        default:
            break;
        }
    }
    return 0;
}