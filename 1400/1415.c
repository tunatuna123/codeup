#include <stdio.h>

int main(){
    int a, even_cnt=0, odd_cnt=0;
    int even_max, odd_max;
    int even[10]={};
    int odd[10]={};

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a);
        if (a%2==0)
        {
            even[even_cnt]=a;
            even_cnt++;
        }
        else
        {
            odd[odd_cnt]=a;
            odd_cnt++;
        }
        
    }
    if (odd_cnt != 0)
    {
        odd_max = odd[0];
        for (int i = 0; i < sizeof(odd)/sizeof(odd[0]); i++)
        {
            if (odd[i] > odd_max)
            {
                odd_max = odd[i];
            }
            
        }
        printf("%d", odd_max);
    }

    if (odd_cnt != 0 && even_cnt != 0)
    {
        printf(" ");
    }
    

    if (even_cnt != 0)
    {
        even_max = even[0];
        for (int i = 0; i < sizeof(even)/sizeof(even[0]); i++)
        {
            if (even[i] > even_max)
            {
                even_max = even[i];
            }
            
        }
    printf("%d", even_max);
    }
}