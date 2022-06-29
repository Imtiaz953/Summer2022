//no.24
#include <stdio.h>
int main(){
    int num,sum,a,b,c,d,e,f,d1,d2,d3,d4,d5,d6;
    printf("Enter 6 digit number:");
    scanf("%d",&num);
    a=num/10;
    d1=num%10;
    b=a/10;
    d2=a%10;
    c=b/10;
    d3=b%10;
    d=c/10;
    d4=c%10;
    e=d/10;
    d5=d%10;
    f=e/10;
    d6=e%10;
    sum=d1+d2+d3+d4+d5+d6;
    printf("The reverse of 6 digit number is : %d%d%d%d%d%d\n",d1,d2,d3,d4,d5,d6);
    printf("The sum of its number is: %d",sum);
}
