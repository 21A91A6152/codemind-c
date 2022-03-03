#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float i,sum,term;
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        term=1/i;
        sum=sum+term;
    }
    printf("%.2f",sum);
    
}