#include <stdio.h>
int count;

int sum(long long int a){
    int temp = a%10;
    if (a <= 1)
    {
        return temp;
    }
    return temp+sum((long long int)(a/10));
}

int main(){
    long long int n;
    scanf("%lld", &n);
    if (sum(n)%7 == 4)
    {
        printf("suspect");
    }
    else
    {
        printf("citizen");
    }
    
}