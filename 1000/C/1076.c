#include<stdio.h>
int main(){
    char x;
    char a='a';
    scanf("%c",&x);
    do{
        printf("%c ",a);
        a++;
        x--;
    }while(x>='a');
}