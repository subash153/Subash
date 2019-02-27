#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,a[10],b[10],i,j,k,c=0,s=0;
scanf("%d%d",&n,&m);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
if(a[j]<m)
{
b[j]=a[j];
s++;
}
c=b[0];
for(k=0;k<s;k++)
{
if(b[k]>c)
{
c=a[k];
}
}
printf("%d",c);
getch();
}
