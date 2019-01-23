#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0;
clrscr();
scanf("%d",&n);
sum=0;
while(n>0)
{
n=n%10;
sum=sum*10+n;
n=n/10;
}
printf("%d",sum);
getch();
}
