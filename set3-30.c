#include<stdio.h>
#include<conio.h>
void main()
{
char a[10],b[10];
int i,j,flag=0;
for(i=0;a[i]!='\0';i++)
{
scanf("%c",&a[i]);
}
for(j=0;b[j]!='\0';j++)
{
scanf("%c",&b[j]);
}
if(a[i]==b[j])
{
flag++;
}
if(flag==1)
{
printf("differ by one");
}
getch();
}
