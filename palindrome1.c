#include<stdio.h>
#include<conio.h>
void main()
{
int a,rem,sum=0;
scanf("%d",&a);
if(a<1000)
{
while(a>0)
{
rem=a%10;
sum=sum*10+rem;
a=a/10;
}
if(rem=a)
{
printf("palindrome");
}
else
{
printf("not palindrome");
}
}
else
{
printf("greater than 1000");
}
getch();
}
