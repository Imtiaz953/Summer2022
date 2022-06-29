//No.3
//Write a program in C to display the pattern like right angle triangle with a number.
//solve by : Imtiaz hossain
//Id : 221-35-953
#include <stdio.h>
int main()
{
   int i,j,rows,k=1;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   printf("%d ",k++);
	printf("\n");
   }
}
