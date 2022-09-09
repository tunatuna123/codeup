#include <stdio.h>

int main(){
    double w,h;
    double av_w,bmi;
    scanf("%lf %lf", &h,&w);
    if (h<150)
    {
        av_w = h-100;
    }
    else if (h<160)
    {
        av_w = (h-150)/2+50;
    }
    else
    {
        av_w = (h-100)*0.9;
    }
    
    bmi = (w-av_w)*100/av_w;

    if (bmi <= 10)
    {
        printf("정상");
    }
    else if (bmi <= 20)
    {
        printf("과체중");
    }
    else{
        printf("비만");
    }
}