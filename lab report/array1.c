#include <stdio.h>

void  main()
{
    int arr[5];
    int i;

    printf("Input 10 elements in the array :\n");
    for(i=0; i<5; i++)
    {
	    printf("element - %d : ",i);
        scanf("%d", &arr[i]);
    }
    for(i=0; i<5; i++)
    {
        printf("\nElements in array are: %d",arr[i]);

    }
    printf("\n");
}
