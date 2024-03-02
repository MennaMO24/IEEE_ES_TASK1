#include<stdio.h>

int main(){
	int int1 =6;
	int int2 =2;
	int int3 =5;
	int1 |= (1 << 0);
    int2 &= ~(1 << 1);
    int3 ^= (1 << 2);
	
	printf("First result: %d\n", int1);
	printf("Second result: %d\n", int2);
	printf("Third result: %d\n", int3);
	return 0;
}