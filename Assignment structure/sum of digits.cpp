//No.6
//Write a C program to calculate sum of digits of a number.
//solve by : Imtiaz hossain
//Id : 221-35-953

#include <stdio.h>
int main()
{
    int num, sum=0;

    printf("Enter any number to find sum of its digit: ");
    scanf("%d", &num); 
    
    while(num!=0)
    { 
        sum += num % 10;
        num = num / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
