//complete
// 48 - Write a user define ascii to float data converter.(Don't use predefine functions)

#include <stdio.h>
#include <stdlib.h>
#define MAXARRAYSIZE 26

//function declaration
int atointeger(char);


void main(){
	char c, i;
	printf("Enter a character(A-Z): ");
	scanf("%c",&c);
	i = atointeger(c);		//function call
	float f = (float) i;		//typecasting int to float
	if(f != 0)
		printf("Float value of ASCII char %c is %.2f",c,f); 	//print float value
	else 
		printf("Char not defined"); 	//print float value
}
 

//function to convert ascii char to a integer
int atointeger(char ch)
{
	int i;
	char alphabets[MAXARRAYSIZE] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};//65-90
	//'[','\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};//integer = 65-122
	for(i = 0;i<MAXARRAYSIZE;i++)
	{
		if (ch == alphabets[i])
		{
			return i+65;
		}
		else
		{
			return 0;
		}
	}
}
 




