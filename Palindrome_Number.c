#include<stdio.h>
int palindrome(int num)
{
    int d,n,rev=0;
    while(num!=0)
    {
        d=num%10;
        rev=rev*10+d;
        num/=10;
    }
    return rev;
}
int main()
{
    int i,n,arr[100],org,rev;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        org=arr[i];
        rev=palindrome(arr[i]);
        if(org==rev)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    return 0;
}