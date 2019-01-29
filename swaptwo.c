#include<stdio.h>
#include<conio.h>
void main()
{
int x,t,y;
scanf("%d%d",&x,&y);
t=x;
x=y;
y=t;
printf("%d%d",x,y);
getch();
}
