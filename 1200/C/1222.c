#include <stdio.h>

int main(){
    int m,s,e;
    scanf("%d %d %d", &m,&s,&e);
    if (m%5==0)
    {
        if ((90-m)/5+s == e)
        {
            printf("same");
        }
        else
        {
            printf("%s", (90-m)/5+s>e ? "win":"lose");
        }
        
    }
    else{
        if ((90-m)/5+s+1 == e)
        {
            printf("same");
        }
        else
        {
            printf("%s", (90-m)/5+s+1 > e ? "win":"lose");
        }
    }
}