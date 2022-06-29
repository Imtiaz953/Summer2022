#include<stdio.h>
int main(){
	
	int n1,n2;
	char choice;
	printf("Enter choice:");
	scanf("%c",&choice);
	printf("\n Enter any two number:");
	scanf("%d %d",&n1,&n2);
	
	switch (choice){
	case '+':
		printf(" %d+%d=%d",n1,n2,n1+n2);
		break;
		case'-':
			printf("%d-%d=%d",n1,n2,n1-n2);
			break;
			case'*':
			printf("%d*%d=%d",n1,n2,n1*n2);
			case'/':
				printf("%d/%d=%d",n1,n2,n1/n2);
				break;
				
				default:
					printf("Enter valid character");
	
	
	}
	
	
	return 0;
}
