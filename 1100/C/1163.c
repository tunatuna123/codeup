#include <stdio.h>

int main(){
    int y,m,d;
    scanf("%d %d %d", &y,&m,&d);
    int hund = ((y+m+d)/100)%10;
    printf("%s", hund%2==0 ? "대박":"그럭저럭");
}