#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,f=0;
scanf("%d",&n);
for(i=2;i<n/2;i++)
{
f=1;
break;
}
}
if(f==0)
{
printf("prime");
}
else
{
printf("not a prime");
}
getch();
}
