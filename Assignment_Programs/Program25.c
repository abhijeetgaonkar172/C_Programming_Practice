//complete
//25 - Write a C program to open a file and write some test and close it.

#include <stdio.h>
#include <stdlib.h>
#define FILENAME "D:\\Sample1.txt"

void main()
{
	int num;
	FILE *fptr;			//file pointer

	// open file for writing
	fptr = fopen(FILENAME,"w");
	
	if(fptr == NULL)
	{
	  printf("Error!");   
	  exit(1);             
	}
	
	printf("Enter a number to add in file: ");
	scanf("%d",&num);
	
	fprintf(fptr,"%d",num);
	printf("Number is added in file");
	
	fclose(fptr);
}
