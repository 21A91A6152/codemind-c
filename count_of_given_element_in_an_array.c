 #include<stdio.h>
 int main()
 {
     int n,arr[100],i,k,c=0;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
     scanf("%d",&k);
     for(i=0;i<n;i++)
     {
         if(arr[i]==k)
         {
             c+=1;
         }
     }
     if(c>0)
     {
         printf("%d",c);
     }
     else
     {
         printf("0");
     }
 }