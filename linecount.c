#include<stdio.h>
#include<conio.h>
void main()
{
char s[300];
int n=0;
scanf("%[^\n]",&s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='.')
{
n++;
}
}
printf("%d",n);
getch();
}
