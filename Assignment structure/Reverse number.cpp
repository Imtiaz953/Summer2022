//No.7
//Write a C program to enter a number and print its reverse.
//solve by : Imtiaz hossain
//Id : 221-35-953

#include<stdio.h>
int main()
{
int num,x,r_num=0,sum=0;
printf("Input a number you wanted to reverse : ");
scanf("%d",&num);
while(num>=1)
{
x=num%10;
r_num=r_num*10+x;
num=num/10;
sum+=x;
}
printf("\nThe reverse of your number = %d\n",r_num);
printf("sum=%d ",sum);
return 0;
}
