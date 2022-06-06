#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,j,c=0,flag=0;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<a; i++)
    {
        for (j=0; j<a; j++)
        {
            if (i!=j)
            {
                if (arr[i]==arr[j])
                {
                    flag=1;
                    break;
                }
            }
        }
        if (flag==1)
        {
            printf ("%d",arr[i]);
            break;
        }
    }
    return 0;
}