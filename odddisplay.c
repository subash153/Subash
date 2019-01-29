#include<stdio.h>
#include<conio.h>
void main()
{
int n,q;
scanf("%d%d",&n,&q);
while(q<=100000)
{
for(i=n+1;i<q;i++)
{
if(i%2==1)
{
printf("%d",i);
}
}
}
getch();
}
