#include<stdio.h>

int main(){
	int num1;
	int num2;
	
	printf("Enter first number: ");
	scanf("%i",&num1);
	printf("Enter second number: ");
	scanf("%i",&num2);
	printf("summation: %i\n",num1+num2);
	printf("subtraction: %i\n",num1-num2);
	printf("multiplication: %i\n",num1*num2);
	printf("division: %i\n",num1/num2);
	printf("remainder: %i\n",num1%num2);
	return 0;
}