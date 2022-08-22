//complete
//23- Write a C program to compare two  strings without using predefined function.
#include <stdio.h>
#include <string.h>
#define MAXCHARSIZE 50

int comparestring();
int stringlen();


void main()
{
	char str1[MAXCHARSIZE], str2[MAXCHARSIZE];
 	printf("Enter the string 1: ");
	gets(str1);			//take string input
 	printf("Enter the string 2: ");
	gets(str2);			//take string input
	
	printf("String 1: %s",str1);
	printf("\nString 2: %s",str2);
	
	int n1 = stringlen(str1);	//strlen function for length
	int n2 = stringlen(str2);	//strlen function for length
	
	int x = comparestring(str1,str2,n1,n2);	//function call
	if(x == 1)
		printf("\nThe 2 strings %s and %s are EQUAL", str1, str2 );
	else
		printf("\nThe 2 strings %s and %s are NOT EQUAL", str1, str2);		
		
}

//function to compare 2 strings
int comparestring(char str1[],char str2[], int n1, int n2)
{
	int i,j, count =0;
	if (n1 == n2)
	{
		for(i=0;i<n1;i++)
		{
			if (str1[i] == str2[i])		//compare each char of str1 with each char of str2
			{
				++count;
			}
			else
				return 0;
		}
		
		if(count == n1)	//if no of equal char is equal to len of string then strings are equal
			return 1;
		else
			return 0;
	}
	else
		return 0;
}

//function to find string length
int stringlen(char s1[]){
	int i=0;
	//keep counting until null character appears 
	while(s1[i]!='\0'){
		i++;
	}
	return i;
}
