#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[10],i,j,sum=0,res;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
while(a[i]>0)
{
sum=sum+n;
}
printf("%d",sum);
res=sum/n;
printf("%d",res);
getch();
}
