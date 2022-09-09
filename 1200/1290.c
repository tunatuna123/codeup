#include <stdio.h>

int main(){

    int i,n,cnt=0;

    scanf("%d",&n);

    for(i=1;i*i<n;i++)
        if(n%i==0)
            cnt+=2;



    if(i*i==n)
        cnt++;

    printf("%d",cnt-1);

    return 0;
}