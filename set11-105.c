#include<stdio.h>
 int main() 
{
	int a[10],n,sum=0,i,j,temp;
	scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(a[i]>a[j])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
        printf("%d ",i+1);
   }
  	return 0;
}