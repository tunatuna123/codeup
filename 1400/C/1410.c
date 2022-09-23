#include <stdio.h>
#include <string.h>

int main(){
    char a[100000]={};
    int cnt_1=0, cnt_2=0;
    scanf("%s", a);

    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == '(')
        {
            cnt_1++;
        }
        else
        {
            cnt_2++;
        }
        
    }
    
    printf("%d %d", cnt_1,cnt_2);
}