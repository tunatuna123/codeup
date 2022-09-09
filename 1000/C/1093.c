#include<stdio.h>
int main(){
    int n,t;
    scanf("%d", &n);
    int a[24]={};
    for(int i=1;i<=n;i++){
        scanf("%d",&t);
        a[t]+=1;
    }
    for(int i=1;i<=23;i++){
        printf("%d ",a[i]);
    }
}