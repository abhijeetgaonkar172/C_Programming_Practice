//complete
//31 - Write a C program which writes array in the file.

#include <stdio.h>
#include <stdlib.h>
#define FILENAME "D:\\Sample1.txt"


void printarray();
void inputarray();


void main()
{
	int MAXCHARSIZE,i;
	FILE *fptr;			//file pointer

	// open file for writing
	fptr = fopen(FILENAME,"a"); //append mode
	
	if(fptr == NULL)
	{
	  printf("Error!");   
	  exit(1);             
	}
	printf("Enter Size of Array: ");
	scanf("%d",&MAXCHARSIZE);
	int A[MAXCHARSIZE];
	
	printf("Enter %d elements of array: ",MAXCHARSIZE);
	inputarray(A,MAXCHARSIZE);
	printarray(A,MAXCHARSIZE);	
	
	fprintf(fptr, "\nArray = "); 
	for(i=0;i<MAXCHARSIZE;i++){
		fprintf(fptr, "%d\t", A[i]);  	
	}

	printf("\nArray is added in file");
	
	fclose(fptr);
}

//function to print array
void printarray(int *a, int n){
	int i;
	for(i = 0;i<n;i++){
		printf("%d",a[i]);
	}
}

//function to input array
void inputarray(int *a,int n){
	int i;
	for(i = 0;i<n;i++){
		scanf("%d",&a[i]);
	}	
	
}
