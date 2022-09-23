#include <stdio.h>
#include <string.h>

int main(){
    int window[31][61]={};
    int n;
    char name[61];
    int sx,sy,ex,ey;
    scanf("%d", &n);
    for (int i = 1; i <= 30; i++)
    {
        for (int j = 1; j <= 60; j++)
        {
            window[i][j]='.';
        }
    }

    for (int k = 0; k < n; k++)
    {
        scanf("%s %d %d %d %d", name,&sx,&sy,&ex,&ey);
        for (int i = sy; i <= ey; i++)
        {
            for (int j = sx; j <= ex; j++)
            {
                if (i==sy||i==ey)
                {
                    window[i][j] = '-';
                }
                if (j==sx||j==ex)
                {
                    window[i][j] = '|';
                }
                if (i==sy&&j==sx || i==sy&&j==ex || i==ey&&j==sx || i==ey&&j==ex)
                {
                    window[i][j] = '+';
                }
                if (i>sy && i<ey && j>sx && j<ex)
                {
                    window[i][j] = ' ';
                }
            }
        }
        for (int i = 0; i < strlen(name); i++)
        {
            if (i<ex-sx-1)
            {
                window[sy][sx+i+1]=name[i];
            }
        }
        
    }

    for (int i = 1; i <= 30; i++)
    {
        for (int j = 1; j <= 60; j++)
        {
            printf("%c", window[i][j]);
        }
        printf("\n");
    }
}