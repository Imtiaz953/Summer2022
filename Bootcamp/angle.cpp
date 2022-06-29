#include<stdio.h>
int main()
{
	int a,b,c,sum;
	printf("Print the value of 3 angle:");
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	if(sum!=180)
	{
		printf("This angle is not valid");
		
	}
	else
	{
		printf("This angle is varified");
	}
}
