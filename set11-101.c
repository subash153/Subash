#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a[1000],i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
            if(a[i]<a[i+1])
            {
                s=s+a[i+1];
            }
            else
            {
                s=s+a[i];
            }
        
    }
    printf("%d",s);
   getch();
}
