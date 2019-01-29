#include<stdio.h>
#include<conio.h>
void main()
{
int a,temp1,temp2,c=1,sum=0,l=0,rem;
clrscr();
scanf("%d",&a);
temp1=a;
temp2=a;
while(a>0)
{
a=a/10;
l++;
}
while(temp1>0)
{
c=1;
rem=temp1%10;
for(i=0;i<l;i++)
{
c=c*rem;
}
sum=sum+c;
temp1=temp1/10;
}
if(sum==temp2)
{
printf("armstrong");
}
else
{
printf("not armstrong");
}
getch();
}
