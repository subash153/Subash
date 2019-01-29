#include<stdio.h>
#include<conio.h>
void main()
{
int main()
{
int a,d,i,n,tn,sum=0;
scanf("%d%d%d",&a,&n,&d);
sum=(n*(2*a+(n-1)*d))/2;
tn=a+(n-1)+d;
for(i=a;i<=tn;i=i+d;
{
if(i!=tn)
{
printf("%d+",i);
}
else
{
printf("%d=%d",i,sum);
}
}
