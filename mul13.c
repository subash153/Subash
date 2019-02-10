#include<stdio.h>
#include<conio.h>
void main()
{
int n;
scanf("%d",&n);
while(n>13)
{
if(n%13==0)
{
printf("multiple of 13");
}
else
{
printf("not ");
}
getch();
}
