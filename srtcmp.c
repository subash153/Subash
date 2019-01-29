#include<stdio.h>
#include<conio.h>
void main()
{
char a[20],s[20];
int i,j,l=0,m=0;
scanf("%s%s",&a,&s);
for(i=0;a[i]!='\0';i++)
{
l++;
}
for(j=0;s[j]!='\0';j++)
{
m++;
}
if(l>m)
{
printf("%s",a);
}
else
{
printf("%s",s);
}
getch();
}
