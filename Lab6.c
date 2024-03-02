#include<stdio.h>

int main(){
	int num1;
	int num2;
	
	printf("Enter first number: ");
	scanf("%i",&num1);
	printf("Enter second number: ");
	scanf("%i",&num2);
	if(num1>num2){
		printf("The First number %i is the largest number\n",num1);
	}
	else if(num1<num2){
		printf("The Second number %i is the largest number\n",num2);
	}
	else{
		printf("Two Numbers is equal");
	}
	return 0;
}