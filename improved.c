#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a,n,num[30];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&n);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(num[30]<num[i])
{
a=num[i];
num[i]=num[j];
num[j]=a;
}
}
}
for(i=0;i<n;i++)
{
printf("%d\n",num[i]);
}
