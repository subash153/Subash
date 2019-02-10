#include<stdio.h>
#include<conio.h>
void main()
{
int num,j,flag;
scanf("%d",&num);
if(num<=1)
{
printf("not prime");
exit(1);
}
flag=0;
for(j=2;j<=num/2;j++)
{
if((num%j)==0)
{
flag=1;
break;
}
}
if(flag===0)
{
printf("prime number");
}
else
{
printf("not prime");
}
getch();
}
