#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,b,i,l,c=0,k;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("b");
scanf("%d",&b);
for(i=0;i<b;i++)
{
c=a[0];
for(k=0;k<n;k++)
{
if(a[k]>c)
{
c=a[k];
l=k;
}
}
a[l]=0;
}
printf("%d",c);
getch();
}
