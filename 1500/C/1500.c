#include <stdio.h>

int main(){
    int a,b;
    int arr[100][100];
    int cnt=1;
    scanf("%d %d", &a,&b);
    
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
}