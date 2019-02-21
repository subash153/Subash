#include<stdio.h>
#include<conio.h>
void main()
{
char swap[10];
int i,temp;
for(i=0;swap[i]!='\0';i++)
{
scanf("%c",&swap[i]);
}
for(i=0;i!='\0';i++)
{
if(i%2==0)
{
temp=swap[i];
swap[i]=swap[i+1];
swap[i+1]=temp;
}
}
getch();
}

