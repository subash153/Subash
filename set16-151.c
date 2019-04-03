#include<stdio.h>
int main()
{
char a[200];int i,flag=0;
for(i=0;a[i]!='\0';i++)
{
scanf("%s",&a[i]);
}
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='a'||a[i]=='b')
{
printf("yes");
}
else
{
flag++;
}
if(flag==1)
{
printf("yes");
}
else
{
printf("no");
}
}
return 0;
}
