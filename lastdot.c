#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int i;
clrscr();
scanf("%[^\n]s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='\0')
{
printf(".");
}
}
getch();
}
