#include<stdio.h>
#include<conio.h>
void swap()
void main()
{
int n,m;
scanf("%d%d",&n,&m);
swap(&n,&m);
}
void swap(int *x,int *y)
{
*x=*x ^ *y;
*y=*x ^ *y;
*x=*x ^ *y;
}
