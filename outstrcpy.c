#include<stdio.h>
#include<conio.h>
void main()
{
char s[15],a[15];
int i,j;
for(i=0;a[i]!='\0';i++)
{
scanf("%c",&a[i]);
}
for(j=0;s[j]!='\0';j++)
{
scanf("%c",&a[j]);
}
for(i=0;s[i]!='\0';i++)
{
for(j=0;a[j]!='\0';j++)
{
if(s[i]==a[j])
{
printf("yes");
}
else
{
printf("no");
}
}
}
getch();
}
