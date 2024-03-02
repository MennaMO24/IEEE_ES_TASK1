#include<stdio.h>

int main(){
	int ID_number1;
	int ID_number2;
	printf("Enter your first seven numbers in your ID: \n");
	scanf("%i",&ID_number1);
	printf("Enter your second seven numbers in your ID: \n");
	scanf("%i",&ID_number2);
	printf("Your ID_number is: %i%i",ID_number1,ID_number2);
	return 0;
}