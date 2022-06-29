//no.2
#include <stdio.h>
int main()
{
   int i,n,a[100];
   printf("Input the number of elements to reverse :");
   scanf("%d",&n);
   
   printf("\nInput %d number of elements in the array :\n",n);
   for(i=0;i<n;i++)
      {
	  scanf("%d",&a[i]);
	  }
      
   printf("\nThe values store into the array in reverse are :\n");
   for(i=n-1;i>=0;i--)
      {
	   printf("% d",a[i]);
	  }
} 
