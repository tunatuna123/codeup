#include <stdio.h>

int main(){
    int y;
    scanf("%d", &y);
    if ((2012-y+1) >= 2000)
    {
        printf("%d %d", (2012-y+1)%100, 3);
    }
    else
    {
        printf("%d %d", (2012-y+1)%100,1);
    }
    
}