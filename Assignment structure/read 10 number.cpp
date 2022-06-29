//No.1
//Write a program in C to read 10 numbers from keyboard and find their sum and average.
//solve by : Imtiaz hossain
//Id : 221-35-953
#include <stdio.h>

int main()
{ 
    int i,n,sum=0;
	printf("\nInput the 10 numbers : \n");
	for (i=1;i<=10;i++)
	{
                printf("Number-%d :",i);

		scanf("%d",&n);
		sum +=n;
	}
	printf("The sum of 10 noumbers is : %d",sum);
	return 0;
 
}
