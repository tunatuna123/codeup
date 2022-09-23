#include <stdio.h>

int n;



void f(int N) {
    int index = 0;
    for (int i = 1; i <= N; i++) {
        if ((N % i) == 0) { index++; }
    }
    if (index == 2) { printf("prime"); }
    else { printf("composite"); }
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}