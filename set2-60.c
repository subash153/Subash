#include<stdio.h>
#include<conio.h>
void main()
{
char a[10],b[10];
int i,j,k=0,l=0;
for(i=0;a[i]!='\0';i++)
{
scanf("%c",&a[i]);
k++;
}
for(j=0;b[j]!='\0';j++)
{
scanf("%c",&b[j]);
l++;
}
if(k==l)
{
printf("yes");
}
getch();
}
