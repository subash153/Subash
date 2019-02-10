#include<stdio.h>
#include<conio.h>
void main()
{
int num,near;
clrscr();
scanf("%d",&num);
if(num%2==0)
{
printf("%d",num);
}
if(num%2==1)
{
num=num-1;
printf("%d",num);
}
getch();
}
