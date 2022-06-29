//No.2
//Write a program in C to read 10 numbers from keyboard and find their sum and average.
//solve by : Imtiaz hossain
//Id : 221-35-953
#include<stdio.h>
int main()
{
   int i,n,sum=0;

   printf("Input number of terms : ");
   scanf("%d",&n);
   printf("\nThe Odd numbers upto %d terms are : ",n);
   for(i=1;i<=n;i++)
   {
     printf("%d ",2*i - 1);
     sum+=2*i-1;
   
   }
   printf("\nSum of %d terms of odd number is = %d",n,sum);
}
