#include <stdio.h>

int main(){
    int a, cnt = 0;
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &a);
        if (a==1)
        {
            cnt += 400;
        }
        else if (a==2)
        {
            cnt += 340;
        }
        else if (a==3)
        {
            cnt += 170;
        }
        else if (a==4)
        {
            cnt += 100;
        }
        else
        {
            cnt += 70;
        }
        
    }
    printf("%s", cnt>500 ? "angry":"no angry");
}