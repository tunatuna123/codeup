#include <stdio.h>

int main(){
    int n,cnt=1;
    int arr[50][50]={};
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[j][i]=cnt;
            cnt++;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
}