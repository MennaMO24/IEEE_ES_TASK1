#include<stdio.h>

int main(){
	int num;
	printf("Enter number: ");
	scanf("%i",&num);
	
	int type = (num%2==0) ? 1 : 0;
	if(type){
		printf("The number is EVEN");
	}
	else{
		printf("The number is ODD");
	}
	return 0;
}