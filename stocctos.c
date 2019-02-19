#include<stdio.h>
#include<conio.h>
void main()
{
char s[10];
int i;
scanf("%s",&s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]>='a'&&s[i]<='z')
{
s[i]=s[i]-32;
}
if(s[i]>='A'&&s[i]<='Z')
{
s[is[i]+32;
}
}
getch();
}

