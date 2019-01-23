#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,j,b,k;
clrscr();
scanf("%[^\n]s",a);
k=0;
for(i=0;a[i]!='\0';i++)
{
if(a[i]!='\0')
{
b[k]=a[i];
k++;
}
b[k]=a[i];
}
else
{
b[k]='\0';
for(j=k-1;j>=0;j--)
{
printf("%c",b[j]);
}
k=0;
}
getch();
}
