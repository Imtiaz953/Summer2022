#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter the value of 3 numbers:");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b){
		if(a>c){
		
		printf("%d is the largest",a);
	}
	else{
		printf("%d is the largest",c);
	}
	
	
	}
	
	if(b>c){
		printf("%d is the largest",b);
	}
	else{
		printf("%d is largest",c);
	}
	
}
