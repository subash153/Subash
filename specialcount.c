#include<stdio.h>
#include<conio.h>
void main()
{
char s[30];
int i,count=0;
scanf("%s",&s);
if(s!=((s>='0')&&(s<='9')&&(s>='a')&&(s<='z')))
{
count++;
}
printf("%d",count);
getch();
}
