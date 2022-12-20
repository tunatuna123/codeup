#include <stdio.h>
int a=0;
void reverse_num(int n){
    if (n>0)
    {
        int p;
        p = n%10;
        n = (n-p)/10;
        if (p != 0)
        {
            a++;
        }
        if (a!=0)
        {
            printf("%d", p);
            a++;
        }
        
        reverse_num(n);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("%d", 0);
    }
    else
    {
        reverse_num(n);
    }
}