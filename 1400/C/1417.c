#include <stdio.h>

int main(){
    int arr[10]={};
    int temp;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }

    printf("%d", arr[7]);
    
}