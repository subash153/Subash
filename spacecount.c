#include<stdio.h>
#include<conio.h>
void main()
{
char s[30];
int n=0;
scanf("%s",&s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
{
n++;
}
}
printf("%d",n);
getch();
}
