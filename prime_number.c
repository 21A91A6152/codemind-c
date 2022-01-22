#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==2 || n==3 || n==5)
    {
    	printf("prime");
	}
	else
	{
		if(n%2 && n%3 && n%5)
    	{
      		printf("prime");
    	}
   		else
    	{
    	    printf("not a prime");
    	}
    }
}