#include <stdio.h>

int main(){
    int ans[7] = {};
    int jihae[6] = {};
    int cnt = 0, bonus = 0;

    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &ans[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", jihae[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        if (ans[i] == jihae[i])
        {
            cnt++;
        }
        if (ans[6] == jihae[i])
        {
            bonus = 1;
        }
        
    }
    
    if (cnt == 6)
    {
        printf("1");
    }
    else if (cnt == 5 && bonus == 1)
    {
        printf("2");
    }
    else if (cnt == 5)
    {
        printf("3");
    }
    else if (cnt == 4)
    {
        printf("4");
    }
    else if (cnt == 3)
    {
        printf("5");
    }
    else 
    {
        printf("0");
    }
}