#include<stdio.h>
#include<conio.h>
void main()
{
int i=1;fact=1;temp;
clrscr();
scanf("%d",&temp);
while(i<=temp)
{
fact=fact*i;
i++;
printf("%d",fact);
getch();
}
