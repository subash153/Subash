#include<stdio.h>
#include<conio.h>
void main()
{
char s[10];
int i;
for(i=0;i!='\0';i++)
{
scanf("%c",&s[i]);
}
s[i]=s[i]+3;
printf("%c",s[i]);
}
