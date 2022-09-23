#include <stdio.h>
 
int n;
 
void f(int n);
 
int main()
{
  scanf("%d", &n);
  f(n);
}
void f(int n){
    printf("%s", n==0 ? "false":"true");
}