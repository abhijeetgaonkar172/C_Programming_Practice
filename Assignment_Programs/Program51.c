//complete
//51 - Write a user define float to ascii data converter. (Don't use predefine functions)

#include <stdio.h>
#include <stdlib.h>
#define MAXARRAYSIZE 26

//function declaration
char integertoa(int);


void main(){
	int n; 
	char c;
	float f;
	printf("Enter a Float between (65-90): ");
	scanf("%f",&f);
	n = (int) f;			//typecast float to int
	c = integertoa(n);		//function call
	if (c != 0)
		printf("ASCII char of integer value %.2f is %c",f,c);
	else
		printf("Value Not Defined");
}
 

//function to convert ascii char to a integer
char integertoa(int n)
{
	int i,n1; char c;
	char alphabets[MAXARRAYSIZE] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};//65-90

	if (65 <= n <= 90)
	{
		n1 = n-65;
		c = alphabets[n1];  
		return c;		
	}
	else
		return 0;
}
