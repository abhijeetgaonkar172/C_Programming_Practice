//complete
//22- Write a C program to reverse a string.
#include <stdio.h>
#include <string.h>
#define MAXCHARSIZE 50

void main(){
	
	char str1[MAXCHARSIZE];
	printf("Enter a String: ");
	gets(str1);
	printf("\nString is %s", str1);
	printf("\nReversed String is %s",strrev(str1));	//using strrev function to reverse the string
	
}
