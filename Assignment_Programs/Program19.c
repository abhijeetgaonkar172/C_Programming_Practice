//complete
#include <stdio.h>
#include <string.h>
#define MAXARRAYSIZE 100
void sortstring();

void main ()
{
	char string[MAXARRAYSIZE];
 	printf("Enter the string : ");
	gets(string);			//take string input
	int n = strlen(string);	//strlen function for length
	sortstring(string,n);	//function call
	printf("The sorted string is : %s", string);
}

void sortstring(char string[],int n)
{
	int i,j;
	for (i = 0; i < n-1; i++) 
	{
		for (j = i+1; j < n; j++) 
		{
			if (string[i] > string[j]) //compare consecutive char and arrange accordingly
			{
					char temp = string[i]; 
					string[i] = string[j];
					string[j] = temp;
			}
		}
	}	
}
