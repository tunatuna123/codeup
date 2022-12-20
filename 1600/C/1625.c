#include <stdio.h>

int sum_each_value(int n){
    int answer = 0;
    while (n > 9)
    {
        answer += n % 10;
        n /= 10;
    }

    return answer + n;
}

int return_ans(int a){
    if (a < 10)
    {
        return a;
    }
    else
    {
        return return_ans(sum_each_value(a));
    }
}

int main(){
    int n,k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &k);
        printf("%d\n", return_ans(k));
    }
}