#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,base=1,oct=0;
while(n>0)
{
rem=n%8;
n=n/8;
oct=oct+(r*base);
base=base*2;
}
printf("%d",oct);
getch();
}
