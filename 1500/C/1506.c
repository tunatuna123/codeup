#include <stdio.h>

#define L arr[i][j-1]
#define R arr[i][j+1]
#define U arr[i-1][j]
#define D arr[i+1][j]

int main(){
    int n;
    int arr[103][103] = {};

    scanf("%d", &n);

    for (int i = 0; i < n+2; i++)
    {
        for (int j = 0; j < n+2; j++)
        {
            if (i==0 || i==n+1 || j==0 || j==n+1)
            {
                arr[i][j] = -1;
            }
            
        }
        
    }

    int i = 1, j = 1, cnt = 0;
    while (1)
    {
        cnt++;
        arr[i][j] = cnt;
        if (L!=0 && R==0 && U!=0 && D==0) {i++;}
        else if(L!=0 && R==0 && U!=0 && D!=0) j++;
        else if(L!=0 && R==0 && U==0 && D!=0) j++;
        else if(L!=0 && R!=0 && U==0 && D!=0) i--;
        else if(L==0 && R!=0 && U==0 && D!=0) i--;
        else if(L==0 && R!=0 && U!=0 && D!=0) j--;
        else if(L==0 && R!=0 && U!=0 && D==0) j--;
        else if(L!=0 && R!=0 && U!=0 && D==0) i++;
        else
        {
            break;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}