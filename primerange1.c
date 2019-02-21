#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,i,f=0;
clrscr();
scanf("%d%d",&n,&m);
for(i=n+1;i<m;i++)
{
for(j=n+1;j<i/2;j++)
{
f=1;
break;
}
}
}
if(f==0)
{
printf("prime");
}
else
{
printf("not a prime");
}
getch();
}
