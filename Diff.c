#include<stdio.h>
#include<conio.h>
void main()
{
int kab,opp,kab1,opp1,kab2,opp2,line1,line2,line3;
scanf("%d%d%d%d%d%d",&kab,&opp,&kab1,&opp1,&kab2,&opp2);
line1=kab-opp;
line2=kab1-opp1;
line3=kab2-opp2;
printf("diff in line 1 is %d\n",line1);
printf("diff in line 2 is %d\n",line2);
printf("diff in line 3 is %d",line3);
getch();
}
