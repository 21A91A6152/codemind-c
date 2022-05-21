#include<stdio.h>
int main()
{
    int a,flag=0;
    scanf("%d",&a);
    int i,ec=0,temp,max;
    if (a>=2 && a<=100)
    {
        int arr[a];
        for (i=0; i<a; i++)
        {
            scanf("%d",&temp);
            if (temp>=1 && temp<=100)
            {
                arr[i]=temp;
            }
        }
        scanf("%d",&temp);
        if (temp>=1 && temp<=50)
        {
            ec=temp;
        }
        max=arr[0];
        for (i=0; i<a; i++)
        {
            if (arr[i]>max)
            {
                max=arr[i];
            }
        }
        for (i=0; i<a; i++)
        {
            flag=0;
            if (arr[i]+ec>=max)
            {
                flag=1;
            }
            if (flag==1)
            {
                printf("True ");
            }
            else
            {
                printf("False ");
            }
        }
    }
    return 0;
}