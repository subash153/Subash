#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,b[100],sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<=n;i++)
{
sum=sum+b[i+1];
}
printf("%d",sum);

}
