#include<stdio.h>
int  main()
{
  int i,n,a[100],sum=0;
 
    printf("Enter the number of elements: ") ;
    scanf("%d",&n) ;
 
    printf("Enter the elements to find sum: \n") ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]) ;
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum of %d elements in an array = %d",n,sum);
}
