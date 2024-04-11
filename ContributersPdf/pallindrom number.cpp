#include<stdio.h>
int main()
{
	int n,n1,rn=0,r,i;
	printf("enter the number");
	scanf("%d",&n);
	n1=n;
	while(n!=0)
	{
		r=n%10;
		rn=rn*10+r;
		n=n/10;
	}
	if(n1==rn)
	{
		printf("the number is pallindrome");
	}
	else{
	printf("the number is not a pallindrome");
}
return 0;
}
