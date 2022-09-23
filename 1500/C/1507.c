#include <stdio.h>

int main(){
    int sum;
    for (int i = 0; i < 4; i++)
    {
        int arr[4]={};
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &arr[j]);
        }
        sum += (arr[2]-arr[0])*(arr[3]-arr[1]);
    }
    printf("%d", sum);
}