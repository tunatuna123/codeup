#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    printf("%s", a%7==0 ? "multiple":"not multiple");
}