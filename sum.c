#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,i,sum=0;
clrscr();
scanf("%d%d",&n,&k);
for(i=1;i<=n;i++)
{
printf("%d",i);
}
for(i=1;i<=k;i++)
{
sum=sum+i;
}
printf("%d",sum);
getch();
}
