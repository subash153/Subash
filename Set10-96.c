#include<stdio.h>
#include<conio.h>
void main()
{
    int a,rem,n,sum;
    
    scanf("%d",&n);
    
        rem=n%10;
        n=n/10;
        while(n>0)
        {
        a=n%10;
        n=n/10;
        }
        sum=rem+a;
        
        printf("%d",sum);
        
    
}
