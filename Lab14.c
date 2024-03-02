#include<stdio.h>

int main(){
	int num1;
	int num2;
	int operation;
	printf("Enter first number: ");
	scanf("%i",&num1);
	printf("Enter second number: ");
	scanf("%i",&num2);
	printf("choose your operation number:(");
	printf("1-summation,2-subtraction,3-multiplication,4-division):\n");
	scanf("%i",&operation);
	
	switch(operation){
		case 1:
		printf("The summation is: %i",num1+num2);
		break;
		case 2:
		printf("The subtraction is: %i",num1-num2);
		break;
		case 3:
		printf("The multiplication is: %i",num1*num2);
		break;
		case 4:
		printf("The division is: %i",num1/num2);
		break;
		default:
		printf("Error!!!!");
	}
	return 0;
}