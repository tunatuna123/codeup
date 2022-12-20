#include <stdio.h>

int ans = 1;

int f(int a){
    if (a > 0)
    {
        ans *= a;
        f(a-1);
    }
    else
    {
        return ans;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    f(n);
    printf("%d", ans);
}