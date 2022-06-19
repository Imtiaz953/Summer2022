#include<stdio.h>
#include<conio.h>
int main()
{
    int c=0,num,fact,n,flag=0,i;
    while(c!=4)
    {
        printf("\n1. Factorial of a number\n2. Prime or not\n3. Odd or even\n4. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&c);
        switch(c)
        {
       case 1:
        printf("Enter integer number:");
        scanf("%d",&num);
        n=num;
        fact=num;
        while(num>1)
        {
            fact=fact*(num-1);
            num=num-1;

        }
        printf("\nThe factorial of %d is:%d\n",n,fact);
        break;

       case 2:
        printf("enter integer number:");
        scanf("%d",&num);
        n=num;
        for(i=2;i<=n/2;i++)
        {
            if(num%i==0)
            {
                flag=1;
                break;
            }
        }
       // if(num==1)
         //   printf("\n%d is neighter prrime nor composite\n");
           // else

            if(flag==0){
                printf("\n%d is the prime number\n",n);}
            else {
                printf("\n%d is not a prime mumber\n",n);
        }

        break;


       case 3:
           printf("Enter an integer number:");
           scanf("%d",&num);
           n=num;

       if(num%2==0)
       {
           printf("\n%d is even number\n",n);

       }
    else{
        printf("\n%d is odd number\n",n);
    }
    break;

       case 4:
        printf("Exit");
        break;


       }
    }
}
