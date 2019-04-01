#include<stdio.h>
int main()
{
    int n,a[10],i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
   
      for(j=0;j<n;j++)
      {
          for(k=j+1;k<n;k++)
      {
          
          if(a[j]!='$')
          {
              if(a[j]==a[k])
          {
              printf("%d",a[j]);
             a[j]='$';
             a[k]='$';
          }
      }
      }
    }
      return 0;
}
