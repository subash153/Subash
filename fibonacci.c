#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,c,i,n;
clrscr();
scanf("%d",&n);
for(i=0;i<=n;i++)
{
c=a+b;
a=b;b=c;
printf("%d\n",c);
}
getch();
}
