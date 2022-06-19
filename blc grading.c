#include<stdio.h>
int main()
{
    double quiz1,quiz2,quiz3,assignment,presentation,attendance,mid,quiz_average,final_mark,total_marks;
    printf("Enter 3 quiz marks:\n");
    scanf("%lf%lf%lf",&quiz1,&quiz2,&quiz3);
    quiz_average=(quiz1+quiz2+quiz3)/3;
    printf("Average mark of 3 quiz is: %.2lf",quiz_average);
    printf("\nEnter the number of assignment:");
    scanf("%lf",&assignment);
    printf("Enter the number of presentation:");
    scanf("%lf",&presentation);
    printf("Enter the number of attendence:");
    scanf("%lf",&attendance);
    printf("Enter the number of mid:");
    scanf("%lf",&mid);
    printf("Enter the number of final_mark:");
    scanf("%lf",&final_mark);
    total_marks=assignment+presentation+attendance+mid+quiz_average+final_mark;
    printf("Your total mark is %.2lf\n",total_marks);



	if(total_marks>=80 && total_marks<=100)
	{
		printf("A+");

	}
	else if(total_marks>=75 && total_marks<=79)
	{
		printf("A");

	}
	else if(total_marks>=70 && total_marks<=74)
	{
		printf("A-");

	}
	else if(total_marks>=65 && total_marks<=69)
	{
		printf("B+");

	}
	else if(total_marks>=60 && total_marks<=64)
	{
		printf("B");

	}
	else if(total_marks>=55 && total_marks<=59)
	{
		printf("B-");

	}
	else if(total_marks>=50 && total_marks<=54)
	{
		printf("C+");

	}
	else if(total_marks>=45 && total_marks<=49)
	{
		printf("C");

	}
	else if(total_marks>=40 && total_marks<=44)
	{
		printf("C-");

	}
	else{

		printf("Fail");
	}


}

