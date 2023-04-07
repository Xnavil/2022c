#include<stdio.h>

int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j+i+1<n)
				printf(" ");
			else
				printf("*");
		}
		for(j=0;j<n;j++)
		{
			if(j<i)
				printf("*");
		}
		printf("\n");
	}
}
