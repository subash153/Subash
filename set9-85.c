#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=10000)
    {
    printf("%d",~n);
    }
    getch();
}
