#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int rev,temp,b,i,j=1;
    while (j>0)
    {
        temp=a;
        rev=0;
        while (temp>0)
        {
           b=temp%10;
           rev=(rev*10)+b;
           temp=temp/10;
        }
        a=a+rev;
        temp=a;
        rev=0;
        while (temp>0)
        {
           b=temp%10;
           rev=(rev*10)+b;
           temp=temp/10;
        }
        if (a==rev)
        {
            printf("%d",rev);
            break;
        }
        j++;
    }
}