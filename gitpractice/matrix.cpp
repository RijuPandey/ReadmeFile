#include<stdio.h>
int main()
{
	int j,i,n,m;
	printf("enter the number of rows");
	scanf("%d",&n);
	printf("enter the number of column");
	scanf("%d",&m);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
