#include<stdio.h>
#include<conio.h>
void main()
{
int i,count1=0,count2=0;
char s[10];
for(i=0;i!='\0';i++)
{
scanf("%c",&s[i]);
}
if(s[i]=='(')
{
count1++;
}
if(s[i]==')')
{
count2++;
}
if(count1==count2)
{
printf("balanced");
}
else
{
printf("not balanced");
}
getch();
}
