//complete
//30 - Write a C program which write string in the file

#include <stdio.h>
#include <stdlib.h>
#define MAXCHARSIZE 100
#define FILENAME "D:\\Sample1.txt"

void main()
{
	char str[MAXCHARSIZE];
	FILE *fptr;			//file pointer

	// open file for writing
	fptr = fopen(FILENAME,"a"); //append mode
	
	if(fptr == NULL)
	{
	  printf("Error!");   
	  exit(1);             
	}
	
	printf("Enter a string to add in file: ");
	scanf("%s",str);
	
	//fprintf(fptr,"%s",str);
	fputs(str,fptr);
	printf("String is added in file");
	
	fclose(fptr);
}
