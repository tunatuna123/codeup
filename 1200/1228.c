#include <stdio.h>

int main(){
    double av_wght, bmi;
    double h,w;
    scanf("%lf %lf", &h,&w);
    av_wght = (h-100)*0.9;
    bmi = (w-av_wght)*100/av_wght;
    
    if (bmi <= 10)
    {
        printf("정상");
    }
    else if (bmi <= 20)
    {
        printf("과체중");
    }
    else
    {
        printf("비만");
    }
    
}