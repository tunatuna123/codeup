#include<stdio.h>
int main(){
    int n,a=0;
    scanf("%d", &n);
    for(int i=1;;i++){
        a+=i;
        if(a>=n){
            break;
        }
    }
    printf("%d",a);
    return 0;
}