#include<stdio.h>
void main()
{
    int n,a[10],b[10],i,j,c=0,k;
    scanf("%d",%n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
        
    }
    for(j=0;a[j]<n;j++)
    {
     for(k=0;b[k]<n;k++)
     {
         if(a[j]==b[k])
         {
             c=a[j];
             
         }
     }
    }printf("%d",c);
}
