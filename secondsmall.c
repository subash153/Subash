#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,i,c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&b);
while(b>0)
{
c=a[0];
for(k=0;k<n;k++)
{
if(a[k]>c)
{
c=a[k];
}
k='\0';
}
b--;
}
getch();
}
