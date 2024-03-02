#include<stdio.h>

int main(){
	int num1;
	int num2;
	int num3;
	printf("Enter first side of triangle: ");
	scanf("%i",&num1);
	printf("Enter second side of triangle: ");
	scanf("%i",&num2);
	printf("Enter Third side of triangle: ");
	scanf("%i",&num3);
	
	if(num1==num2 && num2==num3){
		printf("This is an Equilateral triangle.");
	}
	else if(num1==num2 && num1!=num3){
		printf("This is an isosceles triangle.");
	}
	else if(num1==num3 && num1!=num2){
		printf("This is an isosceles triangle.");
	}
	else if(num2==num3 && num2!=num1){
		printf("This is an isosceles triangle.");
	}
	else {
        printf("This is an Scalene triangle.");
    }
	return 0;
}