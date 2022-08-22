//Complete
//50 - Write a user define Hex to ascii data converter. (Don't use predefine functions)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXARRAYSIZE 26

//function declaration
char integertoa(int);
int hextodecimal();

//main
void main(){
	char hexadecimal[MAXARRAYSIZE]; int decimalnum;
	char n, c;
	printf("Enter a Hex Number between (41-5A): ");
	gets(hexadecimal);								//string input
	decimalnum = hextodecimal(hexadecimal);			//call hextodecimal converter, returns decimal value
	
	n = integertoa(decimalnum);		//function call

	if(n != 0)			//check if char is not 0
		printf("\nASCII char of hexadecimal value %s is %c",hexadecimal,n);
	else
		printf("\nValue Not Defined");
}
 
//function to convert integer to ascii char, returns char
char integertoa(int n)
{
	int i,n1; char c;
	char alphabets[MAXARRAYSIZE] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};//65-90
	if (65 <= n <= 90)
	{
		n1 = n-65;
		c = alphabets[n1];  
		return c;			//return char	
	}
	else
		return 0;			//return 0
}

//function to convert hex to decimal, returns decimal number
int hextodecimal(char hexadecimal[])
{
    int length, base = 1;				//for first entry, power is 0 i.e base is 1, next base is 16, next 16*16 
    int i, j = 0;
	int decimalnum;
	length = strlen(hexadecimal);
	
	for(i = length-- ; i>=0 ; i-- )
	{
		if(hexadecimal[i] >= '0' && hexadecimal[i]<= '9')
		{
			decimalnum += (hexadecimal[i]-48) * base;		//decimal 48 is 0 in char
			base *= 16;										//the power of 16 increments for each char	
		}
		else if(hexadecimal[i] >= 'A' && hexadecimal[i]<= 'F')
		{
			decimalnum += (hexadecimal[i]-55) * base;		//converts A to 10, B to 11, so on.... 
			base *= 16;
		}
		else if(hexadecimal[i] >= 'a' && hexadecimal[i]<= 'f')
		{
			decimalnum += (hexadecimal[i]-87) * base;		//converts a to 10, b to 11, and so on...
			base *= 16;
		}
	}
	return decimalnum;			
}


