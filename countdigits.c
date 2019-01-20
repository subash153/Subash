#include<stdio.h>
#include<conio.h>
void main()
{
int a,l=0,rem=0;
clrscr();
scanf("%d",&a);
while(a>0)
{
rem=a%10;
l++;
a=a/10;
}
printf("%d",l);
getch();
}
