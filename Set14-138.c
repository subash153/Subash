#include<stdio.h>
#include<conio.h>
void main()
{
    int n,b=2,f=0,i;
    printf("Enter the value");
    scanf("%d",&n);
    for(i=0;i<n/2;i++)
    {
        if(b==n)
        {
            f=1;
            break;
        }
        else
        {
            b=b*2;
            f=0;
        }
    }
    if(f==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 
}
