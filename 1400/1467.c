#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d", &m,&n);
    for(int i=1;i<=m;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            printf("%d ", i+(j*m));
        }
        printf("\n");
    }
    return 0;
}