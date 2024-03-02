#include<stdio.h>

int main(){
	int num;
	printf("Enter Number: ");
	scanf("%i",&num);
	
	if(num%2 == 0){
		printf("This number is EVEN.");
	}
	else {
        printf("This number is ODD.");
    }
	return 0;
}