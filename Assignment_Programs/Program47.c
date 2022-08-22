//Complete
//47 - Write a user define ascii to Hex data converter.(Don't use predefine functions)

#include <stdio.h>
#define MAXARRAYSIZE 26

//function declaration
int atointeger(char );
void decimaltohex(int);

void main(){
	char c; int i;
	printf("Enter a character: ");
	scanf("%c",&c);
	i = atointeger(c);			//ascii to integer function call
	printf("Integer value of ASCII char %c is %d",c,i);	
	printf("\nHex value of ASCII char %c is",c);
	decimaltohex(i);			//convert decimal to hex function call 
	
}

//function to convert ascii char to integer
int atointeger(char ch)
{
	int i;
	char alphabets[MAXARRAYSIZE] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};//65-90

	for(i = 0;i<MAXARRAYSIZE;i++)
	{
		if (ch == alphabets[i])
		{
			return i+65;
		}
	}
}

//function to convert decimal to hex
void decimaltohex(int decimalnum)
{
    int quotient, remainder;
    int i, j = 0;
    char hexadecimalnum[MAXARRAYSIZE];
 
    quotient = decimalnum;
 
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[j++] = 48 + remainder;	//dec 48 is 0 in char
        else										//if number>= 10
            hexadecimalnum[j++] = 55 + remainder;	//dec 55 +10 =65 which is A in char
        quotient = quotient / 16;
    }
 
    // display integer into character
    for (i = j; i >= 0; i--)		//print reversed array
            printf("%c", hexadecimalnum[i]);
}
