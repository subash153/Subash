#include<stdio.h>
#include<conio.h>
void main()
{
   int N,a[10000],s=1,i;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<N;i++)
   {
       
       
  
    s=s*a[i];
    

       
}
    if(s%2==0)
    printf("even");
    else
      printf("odd");
}
