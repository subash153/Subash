#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
if(j%2==0)
{
printf("%d",j);
}
}
getch();
}
