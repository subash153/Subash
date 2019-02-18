#include<stdio.h>
#include<conio.h>
void main()
{
char a[20],b[20];
int i,j,k,l;
scanf("%[^\n]s",&a);
j=0;
for(i=0;a[i]!='\0';i++)
{
if(a[i]!=' ')
{
b[j]=a[i];
j++;
}
else
{
b[j]='\0';
for(j=0;b[j]!='\0';j++)
{
if(b[j]>='a'&&b[j]<='z')
{
b[0]=b[0]-32;
}
else if(b[j]>='A'&&b[j]<='Z')
{
b[0]=b[0]+32;
}
printf("%c",b[j]);
}
j=0;
printf("\t");
}
}
}
