#include<stdio.h>

int main(){
	int degree;
	printf("Enter degree: ");
	scanf("%i",&degree);
	
	if(0<degree && degree<50){
		printf("Failed");
	}
	else if(50<=degree && degree<65){
		printf("Passed");
	}
	else if(65<=degree && degree<75){
		printf("Good");
	}
	else if(75<=degree && degree<85){
		printf("Very Good");
	}
	else if(85<=degree && degree<=100){
		printf("Excellent");
	}
	else {
        printf("Error");
    }
	return 0;
}