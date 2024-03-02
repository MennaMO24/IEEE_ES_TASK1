#include<stdio.h>

int main(){
	int X =5;
	int Y =2;
	int Z =X&Y;
	int K =X|Y;
	int L =X>>1;
	int M =X^Y;
	int N =X<<2;
	
	printf("Z= %i&%i= %i\n",X,Y,Z);
	printf("K= %i|%i= %i\n",X,Y,K);
	printf("L= %i>>1= %i\n",X,L);
	printf("M= %i^%i= %i\n",X,Y,M);
	printf("N= %i<<2= %i\n",X,N);
	return 0;
}