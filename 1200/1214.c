#include <stdio.h>

int main(){
    int lim_month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int y,m;
    scanf("%d %d", &y,&m);
    if ((y%4 == 0 && y%100 != 0 || y%400==0) && m==2)
    {
        printf("29");
    }
    else
    {
        printf("%d", lim_month[m-1]);
    }
    
}