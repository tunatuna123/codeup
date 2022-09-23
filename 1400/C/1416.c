#include <stdio.h>
#include <math.h>

int main(){
    int n;
    int cnt=0;
    scanf("%d", &n);

    if (n == 0)
    {
        printf("0");
    }
    
    for (int i = 31; i >= 0; i--)
    {
        if (cnt == 0 && (n >> i & 1) == 1)
        {
            printf("%d", (n>>i&1));
            cnt++;
        }
        else if(cnt != 0)
        {
            printf("%d", (n>>i&1));
        }
    }
}