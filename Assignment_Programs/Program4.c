//complete

#include <stdio.h>

//function declaration
void printarray();
void swap();
void inputarray();

void main(){
	int n; 
	
	//size of array
	printf("Enter size of array:");
	scanf("%d",&n);
	
	//declare arrays of size n
	int a[n];
	int b[n];
	int temp[n];
	
	//input array 1
	printf("Enter %d elements of Array 1: ",n);
	inputarray(a,n);
	
	//print array 1
	printf("Array 1:");
	printarray(a,n);
	
	//input array 2
	printf("\nEnter %d elements of Array 2: ",n);
	inputarray(b,n);
	
	//print array 2
	printf("\nArray 2:");
	printarray(b,n);

	//call swap function 
	swap(a,b,n);
	
	//print swapped array 1
	printf("\nSwapped Array 1:");
	printarray(a,n);
	
	//print swapped array 2
	printf("\nSwapped Array 2:");
	printarray(b,n);
	
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

//function to swap 2 arrays
void swap(int *a, int *b, int n)
{
	int i;
	for(i = 0;i<n;i++)
	{
		int temp = a[i];			//copy content of a in temp array
		a[i] = b[i];			//copy content of b in a array 
		b[i] = temp;			//copy content of temp in b array
	}	
}
