#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int pr = (n/10+n%10*10)*2;
    if (pr >= 100)
    {
        printf("%d\n", pr%100);
        printf("%s", pr%100 <= 50 ? "GOOD":"OH MY GOD");
    }
    else
    {
        printf("%d\n", pr);
        printf("%s", pr <= 50 ? "GOOD":"OH MY GOD");
    }
    
}