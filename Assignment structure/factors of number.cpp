//No.8
//Write a C program to find all factors of a number.
//solve by : Imtiaz hossain
//Id : 221-35-953

#include <stdio.h>
int main()
 {
    int num, i;
    printf("Enter a number to find factors: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
