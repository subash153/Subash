#include<stdio.h>
#include<conio.h>
void main()
{
int num,sum=0,rem;
scanf("%d",&num);
while(num>0)
{
rem=num%10;
sum=sum+(rem*rem);
num=num/10;
}
printf("%d",sum);
getch();
}
