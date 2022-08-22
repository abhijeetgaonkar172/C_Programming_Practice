//complete
//38 - Write a C program for delete an element at desired position in an array.

#include <stdio.h>
#define MAXARRAYSIZE 100

//function declaration
void printarray();
void inputarray();
void deletenumatpos();


void main()
{
	int array[MAXARRAYSIZE], position, n;
	
	printf("Enter number of elements in array\n");
	scanf("%d", &n);
	
	printf("Enter %d elements\n", n);
	inputarray(array,n);
	
	printf("Enter the location where you wish to delete element\n");
	scanf("%d", &position);
	
	deletenumatpos(array,position,n);
}

//function to delete a number at given position
void deletenumatpos(int array[], int position, int n)
{	
	int c;
	if (position >= n+1)
		printf("Deletion not possible.\n");
	else
	{
		for (c = position - 1; c < n - 1; c++)
			array[c] = array[c+1];
	
	  	printf("Resultant array:\n");
		printarray(array,n-1);
	}
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
