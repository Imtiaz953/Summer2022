//No.5
//Write a C program to check whether a given number is an armstrong number or not.
//solve by : Imtiaz hossain
//Id : 221-35-953

#include <stdio.h> 
int main()
{
    int number, original_number, sum=0;
    int digit;
 
    printf("Enter a number to find armstrong or not: ");
    scanf("%d",&original_number);
 
    number = original_number; //Copying the original number
 
    while(number != 0){
        digit = number % 10;
        sum += digit * digit *digit;
        number=number/10;
    }
 
    if(sum == original_number)
        printf("\nArmstrong Number ");
    else
        printf("Not an Armstrong Number");
 
    return 0;
}
