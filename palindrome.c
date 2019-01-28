#include<stdio.h>
#include<conio.h>
void main()
{
int num,=0,rem,num1;
clrscr();
scanf("%d",&n);
num1=n;
while(n!=0)
{
rem=n%10;
num=num*10+rem;
n=n/10;
}
if(num1=num)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}

