#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,j,sum=0,flag=0;
    for (i=1; i<=a; i++)
    {
        sum=(i*i);
        if (sum==a)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}