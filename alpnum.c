#include <stdio.h>
#include <conio.h>
int main()
{
 
   char var[20];
 
   int i,j;
   for(i=0;var[i]!='\0';i++)
   {
   scanf("%c",&var[i]);
   }
   for(j=0; j<10; j++)
   {
       if( isdigit(var[i]) ) 
    {
       printf("%c", var[i] ); //prints 213411
    }
       
   }
   
   
   
   return(0);
}
