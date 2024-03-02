#include<stdio.h>

int main(){
	int num1;
	int num2;
	int type;
	printf("Enter first number: ");
	scanf("%i",&num1);
	printf("Enter second number: ");
	scanf("%i",&num2);
	if (num1 > num2) {
        type= 1; 
    } 
	else if (num1 < num2) {
        type= 2;
    } 
	switch(type){
		case 1:
		printf("Number1 %i is the Maximum number",num1);
		break;
		case 2:
		printf("Number2 %i is the Maximum number",num2);
		break;
		default:
		printf("Number1 and Number2 are equal");
	}
	return 0;
}