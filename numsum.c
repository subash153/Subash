#include<stdio.h>
#include<conio.h>
void main()
{
int num,sum=0;
scanf("%d",&num);
while(num>0)
{
num=num%10;
sum=sum+num;
num=num/10;
}
printf("%d",sum);
getch();
}
