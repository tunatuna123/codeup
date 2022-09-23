#include <stdio.h>
 
int n;
 
void f(int k);
 
int main()
{
  scanf("%d", &n);
  f(n);
}
void f(int k){
    if(k%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
}