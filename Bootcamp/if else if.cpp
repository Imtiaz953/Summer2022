#include<stdio.h>
int main()
{
char a;

printf("Enter a charecter:");
scanf("%c",&a);

if((a>='A'  && a<='Z' )||(a>='a' && a<='z')){

printf(" %c is a alphabet",a);
}
else if (a>='0'&&a<='9'){
	printf("'%c' is a number");
	
}
else{
	printf("'%c' is special number");
}


return 0;


}
