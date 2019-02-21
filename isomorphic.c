#include<stdio.h>
#include<conio.h>
void main()
{
char a[10],s[10];
int i,n,c=0;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%c",&a[i]);
scanf("%c",&s[i]);
}
if(a[i]!=s[i])
{
c++;
}
if(c==1)
{
printf("it is isomorphic");
}
else
{
printf("not isomorphic");
}
getch();
}
