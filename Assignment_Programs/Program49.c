//complete
// 49 - Write a user define integer to ascii data converter.(Don't use predefine functions)

#include <stdio.h>
#include <stdlib.h>
#define MAXARRAYSIZE 26

//function declaration
char integertoa(int);


void main(){
	char n, c;
	printf("Enter a Integer between (65-90): ");
	scanf("%d",&n);
	c = integertoa(n);		//function call
	if (c != 0)
		printf("ASCII char of integer value %d is %c",n,c);
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
