#include <stdio.h>

int main(){
    int a,b, sum=0, cnt=0;
    scanf("%d %d", &a,&b);

    for (int i = a; i <= b; i++)
    {
        if (i%2==0)
        {
            sum -= i;
            printf("-%d", i);
            cnt++;
        }
        else{
            sum += i;
            if (cnt == 0)
            {
                printf("%d", i);
                cnt++;
            }
            else{
            printf("+%d", i);
            }
        }
    }
    printf("=%d", sum);
}