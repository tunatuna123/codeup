#include<stdio.h>
int main(){
    int n,m;
    scanf("%d", &n);
reget:
    scanf("%d", &m);
    printf("%d\n",m);
    n--;
    if(n!=0){
        goto reget;
    }
}