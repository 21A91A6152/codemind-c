#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,p,m,n;
    scanf("%d%d%d",&x,&y,&m);
    p=pow(x,y);
    n=p%m;
    printf("%d",n);
    
}