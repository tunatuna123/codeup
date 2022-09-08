#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if (c >= a+b)
    {
        printf("삼각형아님");
    }
    else
    {
        if (a == b && a == c)
        {
            printf("정삼각형");
        }
        else if (a == b || b == c || a == c)
        {
            printf("이등변삼각형");
        }
        else if (a*a + b*b == c*c)
        {
            printf("직각삼각형");
        }
        else
        {
            printf("삼각형");
        }
        
    }
    
}