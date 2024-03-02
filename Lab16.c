#include<stdio.h>

int main(){
	int num;
	printf("Enter number: ");
	scanf("%i",&num);
	
	int Absolute = (num>=0) ? num : -num;
	printf("Absolute of the number is: %i",Absolute);
	return 0;
}