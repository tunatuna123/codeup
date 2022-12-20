#include <stdio.h>

long double next, temp;

long double sqrt(int a){

    next = 0.5*(1+(a/1));

    while (1)
    {
        temp = next;

        next = 0.5*(next + (a/next));

        if (temp-next < 0.005 || temp-next<-0.005)
        {
            break;
        }
        
    }
    
    return next;
}

int main(){
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int k;
        scanf("%d", &n);
        printf("%Lf\n", sqrt(n));
    }
    
}