#include <stdio.h>

int main(){
    int n,a;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i%j==0)
            {
                cnt++;
            }
            
        }
        if (cnt == 0)
        {
            a = i;
        }
        
        
    }
    printf("%d", a);
    return 0;
}