#include<stdio.h>
#include<conio.h>
void main()
{
char s;
clrscr();
scanf("%s",&s);
for(i=0;s[i]!='\0';i++)
{
if((s[i]>='a'&&s[i]<='z')&&(s[i]>=1&&s[i]<='9'))
{
printf("yes");
}
}
getch();
}
