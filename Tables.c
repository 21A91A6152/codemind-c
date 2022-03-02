#include <stdio.h>
int main() 
{
  int n, i ,k;
  scanf("%d%d", &n,&k);
  for (i = 1; i <= k; ++i) 
  {
    printf("%d x %d = %d
", n, i, n * i);
    i=i+1;
  }
  return 0;
}
