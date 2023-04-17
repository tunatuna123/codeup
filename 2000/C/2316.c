#include <stdio.h>

int main(){
    int n,m, j;
    scanf("%d %d", &n,&m);
    for (int s = 1; s <= n; s++)
    {
        int a;
        scanf("%d", &a);
        int diviors[a+1];
        for (int i = 0; i <= a; ++i)
        {
            for (int j = i; j <= a; j+=i)
            {
                ++ diviors[j];
            }
        }
    }
}