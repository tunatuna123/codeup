#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    int cnt_1 = 0, cnt_2 = 0;
    scanf("%s", a);

    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] += 32;
        }
    }
    
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == 'c')
        {
            cnt_1++;
        }
        if (i >= 1 && a[i]=='c' && a[i-1]=='c')
        {
            cnt_2++;
        }
        
    }
    printf("%d\n%d", cnt_1,cnt_2);
}