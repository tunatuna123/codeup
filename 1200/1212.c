#include <stdio.h>

int main(){
    int a,b,c, temp;
    int arr[4] = {};
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    
    if (arr[2] < arr[0]+arr[1])
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    

}