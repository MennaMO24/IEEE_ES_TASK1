#include<stdio.h>

int main(){
	int num1;
	int num2;
	
	printf("Enter first number: ");
	scanf("%i",&num1);
	printf("Enter second number: ");
	scanf("%i",&num2);
	if(num1==num2){
		printf("Number1 and Number2 are equal");
	}
	else{
		printf("Number1 and Number2 are NOT equal");
	}
	return 0;
}