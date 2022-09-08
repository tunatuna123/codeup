#include <stdio.h>

int main(){
    int cnt = 0;
    int a;

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &a);
        if (a == 1)
        {
            cnt++;
        }
        
    }
    if (cnt == 0)
    {
        printf("모");
    }
    else if (cnt == 1)
    {
        printf("도");
    }
    else if (cnt == 2)
    {
        printf("개");
    }
    else if (cnt == 3)
    {
        printf("걸");
    }
    else{
        printf("윷");
    }
}