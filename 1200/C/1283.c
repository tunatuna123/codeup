#include<stdio.h>
 
int main() {
 
    float a;
    int b;
    
    scanf("%f", &a);
    int a2; 
    a2 = a;
    
    scanf("%d", &b);
    float rate;
    for (int i = 1; i <= b; i++) {
        scanf("%f", &rate);
        a = a + (a * rate * 0.01);
    
    }
    int sum; 
    if ((a - a2) > 0) { sum = a - a2 + 0.5; }
    else { sum = a - a2 - 0.5; }
 
    printf("%d\n", sum);

    if (sum > 0) { printf("good"); }
    else if (sum == 0) { printf("same"); }
    else { printf("bad"); } 
}
