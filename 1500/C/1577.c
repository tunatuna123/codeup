#include <stdio.h>
#include <math.h>

int myabs(long long int a){
    if(a<0){a*=-1;};
    return a;
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", myabs(a));
}