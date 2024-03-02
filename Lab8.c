#include<stdio.h>

int main(){
	int num;
	
	printf("Enter number: ");
	scanf("%i",&num);
	if(num>0){
		printf("%i is a positive number",num);
	}
	else if(num<0){
		printf("%i is a negative number",num);
	}
	else {
        printf("The number is zero\n");
    }
	return 0;
}