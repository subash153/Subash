#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i;
clrscr();
scanf("%d",&a);
for(i=0;a[i]!='\0';i++)
{
if((a==0)&&(a==1))
{
printf("binary representation");
}
else
{
printf("not binary");
}
}
getch();
}
