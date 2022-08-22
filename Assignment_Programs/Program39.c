//Complete
//39 - Write a C program for insert an element at desired position in an array

#include <stdio.h>
#define MAXARRAYSIZE 100

int n; 		//global variable

//function declaration
void printarray();
void inputarray();
void insertnumatpos();


void main()
{
	int array[MAXARRAYSIZE], position, newelement;
	
	printf("Enter number of elements in array\n");
	scanf("%d", &n);
	
	printf("Enter %d elements\n", n);
	inputarray(array,n);
	
	printf("\nEntered Array: ");
	printarray(array,n);
	
	printf("\nEnter the location where you wish to add new element\n");
	scanf("%d", &position);
	
	printf("Enter the new element\n");
	scanf("%d", &newelement);	
	
	insertnumatpos(array,position, newelement);
}

//function to insert a number at given position
void insertnumatpos(int array[], int position, int newelement)
{	
	int i,j,temp,count = 0;
	if (position >= n+1)			//position out of max size n, then cannot insert
		printf("Insertion not possible.\n");
	else
	{
		n++;			//increment n as we are shifting to right
		// shift elements forward
    	for (i = n-1; i >= position; i--)
        	array[i] = array[i - 1];	
        
		// insert new element at position
    	array[position - 1] = newelement;
			
	  	printf("Resultant array:\n");
		printarray(array,n);
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
