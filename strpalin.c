#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b[100];
printf("enter a string to check if it is a palindrome");
gets(a);
strcpy(b,a);
strrev(b);
if(strcmp(b,a)==0)
{
printf("palindrome");
}
else
{
printf("not palindrome");
}
getch();
}
