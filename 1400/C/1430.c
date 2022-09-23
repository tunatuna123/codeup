#include <stdio.h>

int arr[10000001]={0,};
int n,m,a;

int main(){
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        arr[a] = 1;
    }

    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a);
        printf("%d ", arr[a]);
    }
    return 0;
}