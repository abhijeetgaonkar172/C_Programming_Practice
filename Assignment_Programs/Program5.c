//complete

#include<stdio.h>
#include<string.h>

void swapstrings();

void main()
{
    char str1[50], str2[50], temp[50];//declare char arrays
    printf("Enter the String 1: ");
    gets(str1);						//string str1 input
    printf("Enter the String 2: ");
    gets(str2);						//string str2 input
    printf("\nString before Swap:\n");
    printf("First String = %s\tSecond String = %s", str1, str2);
    swapstrings(str1,str2);			//swapstrings function call
	printf("\n\nString after Swap:\n");
    printf("First String = %s\tSecond String = %s", str1, str2);
}

//function to swap 2 strings
void swapstrings(char *str1,char *str2)
{
	char temp[50];
    strcpy(temp, str1);			//copy content of str1 in temp
    strcpy(str1, str2);			//copy content of str2 in str1
    strcpy(str2, temp);			//copy content of temp in str2		
}
