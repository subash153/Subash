#include<stdio.h>
#include<conio.h>
void main()
{
    int n,m,a[100],b[100],c[100],i,j,k,l=0,f=0,t;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<m;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
        f=0;
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                c[l]=a[i];
                b[j]='$';
                l++;
                f=1;
            }
        }
        if(f==1)
        a[i]='$';
    }
    for(i=0;i<l;i++)
    {
        if(c[i]>c[i+1])
        {
         t=c[i];
         c[i+1]=c[i];
         c[i]=t;
        }
    }
    for(i=0;i<l;i++)
    {
        printf("%d ",c[i]);
    }
}