#include<stdio.h>
int main()
{
    int n,i,arr[100],sume=0,sum=0,sumo=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sume=sume+arr[i];
        }
    }

    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            sumo=sumo+arr[i];
        }
    }
    sum=sume-sumo;
    printf("%d",sum);
    
}