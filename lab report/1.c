#include<stdio.h>
int main(){

    int n1,n2;
    char choice;
    printf("\nEnter any choice: ");
    scanf("%c", &choice);
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);


    switch(choice){
    case '+':
        printf("%d + %d = %d", n1,n2,n1+n2);
        break;
    case '-':
        printf("%d - %d = %d", n1, n2, n1-n2);
        break;
    case '*':
        printf("%d * %d = %d", n1, n2, n2*n2);
        break;
    case '/':
        printf("%d / %d = %d", n1,n2,n1/n2);
        break;
    default:
        printf("Not a valid input");

    }

    return 0;
}
