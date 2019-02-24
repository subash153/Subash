#include<stdio.h>
#include<conio.h>
void main()
{
	int n,m,i,j,k,count=0;
	scanf("%d %d",&n,&m);
	for(i=n;i<=m;i++)
	{
		for(j=1;j<=i;j++)
		{
			k=j*j;
			if(k==i)
			{
				count=count++;
				break;
			}
		}
	}
	printf("%d",count);
	return 0;
}
