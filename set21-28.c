#include<stdio.h>
void main()
{
char str[80];
int i=0,len,j;
clrscr();
printf("enter the string\n");
gets(str);
len=strlen(str);
for(i=0;i<len;i++)
{
if(str[i]==' ')
{
for(j=i;j=len;j++);
{
str[j]=str[j+1];
len--;
}
}
getch();
}
