#include <stdio.h>

int a;
void test();

void main(){
	a=10;
	printf("Initial a is %d",a);
	test();
	
	printf("After calling func a is %d",a);
}

void test(){
	a=20;
}
