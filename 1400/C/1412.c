#include <stdio.h>
#include <string.h>

int main(){
    int arr[26]={0,};
    char a[90];
    scanf("%s", a);

    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] >=97 && a[i]<=122)
        {
            arr[a[i]-97]++;
        }
    }
    
    for (int i = 0; i < strlen(a); i++)
    {
        printf("%d", arr[i]);
    }
    
}