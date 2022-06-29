//no.4
#include<stdio.h>
 
int main() {
   int arr1[10], arr2[10], i, n;
 
   printf("\nEnter no of elements :");
   scanf("%d", &n);
   
   printf("\nEnter the array values :\n");
   for (i = 0; i < n; i++) {
      scanf("%d", &arr1[i]);
   }

   for (i = 0; i < n; i++) {
      arr2[i] = arr1[i];
   }
 
   printf("The new array is :");
   for (i = 0; i < n; i++)
      printf("\n %d", arr2[i]);
 
   return (0);
}
