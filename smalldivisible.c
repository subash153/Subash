#include<stdio.h>
#include<conio.h>
void main()
{
int n,m;
clrscr();
scanf("%d%d",&n,&m);
if((n/m==0)&&(m/m==0))
{
printf("%d",m);
}
else
{
printf("%d",n);
}
getch();
}
