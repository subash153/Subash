#include<stdio.h>
#include<math.h>
#include<conio.h>
 void main()
{
    int n,a[100],i,j,r,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            r=(a[i])|(a[j]);
            if(r>max)
            {
                max=r;
            }
        }
    }
    printf("%d",max);
}
