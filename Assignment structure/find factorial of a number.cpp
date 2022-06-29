//No.4
//Write a C program to calculate the factorial of a given number.
//solve by : Imtiaz hossain
//Id : 221-35-953

int main()
{
    int i=1,fact=1,n;

    printf("Enter a number to find factorial: ");
    scanf("%d",&n);
     while(i<=n){
        fact=fact*i;
        i++;
    } 
    printf("Factorial of %d is : %d",n,fact);

    return 0;
}
