#include<stdio.h>
int main()
{
    float a,b,add,sub;
    printf("Enter first float number:");
    scanf("%f",&a);
    printf("Enter second float number:");
    scanf("%f",&b);
    add=a+b;
    sub=a-b;
    printf("\naddition of two float number is %.2f\n",add);
    printf("substraction of two float number is %.2f\n",sub);

    return 0;
}
