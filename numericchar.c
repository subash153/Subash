#include<stdio.h>
#include<conio.h>
void main()
{
char s[30];
int i,count=0;
scanf("%s",&s);
if((s>='0')&&(s<='9'))
{
count++;
}
printf("%d",count);
getch();
}
