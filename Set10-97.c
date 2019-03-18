#include<stdio.h>
#include<conio.h>
void main()
{
    int l,r,sum=0,i;
    scanf("%d %d",&l,&r);
    for(i=l;i<=r;i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
    }
    printf("%d",sum);


    getch();
}
