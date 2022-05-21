#include<stdio.h>
int prime(int num)
{
    int c=0,i;
    for (i=1; i<=num; i++)
    {
        if (num%i==0)
        {
            c++;
        }
    }
    if (c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    if (prime(a)==1)
    {
        int r,flag=0;
        while (a>0)
        {
            r=a%10;
            if (prime(r)==1)
            {
                flag=1;
                a=a/10;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if (flag==1)
        {
            printf("Mega Prime");
        }
        else
        {
            printf("Not Mega Prime");
        }
    }
    else
    {
        printf("Not Mega Prime");
    }
    return 0;
}