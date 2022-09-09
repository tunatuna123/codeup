#include<stdio.h>
int main(){
    int i,n,sum=0;
    scanf("%d", &n);
    for(i=1;sum<n;i++){
        sum+=i;
        if(sum>=n){
            printf("%d", i);
        }
    }
    return 0;
}