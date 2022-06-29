#include<stdio.h>
int main()
{
	int a[5];
	int i; 
	printf("Enter elements in array:\n");
	
	for(i=0;i<5;i++){
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
		
	}
	
	printf("sorted arrey");
	for(i=0;i<5;i++){
		printf("a[%d]:",i);
		printf("%d",a[i]);
		
	
}
printf("\n");
}
