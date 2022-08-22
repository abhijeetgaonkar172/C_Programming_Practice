//complete
//36 - Write a C program to find out largest element of an array.

#include <stdio.h>

//function declaration
void printarray();
void inputarray();
int largestnum();


void main(){
	int n,max; 
	
	//size of array
	printf("Enter size of array:");
	scanf("%d",&n);
	
	//declare arrays of size n
	int a[n];
	
	//input array 1
	printf("Enter %d elements of Array: ",n);
	inputarray(a,n);
	
	//print array 1
	printf("Array: ");
	printarray(a,n);

	//call largestnum function 
	max = largestnum(a,n);
	
	//print swapped array 1
	printf("\nLargest number in Array: %d", max);	
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

//function to find largest number of an array
int largestnum(int *a, int n)
{
	int i, max = a[0];		//store initial value in max
	for(i=0;i<n;i++)
	{
		if(max<a[i])			//if a[i] is greater then max store that value in max
		{
			max = a[i];			//copy content of a in max variable
		}
	}
	return max;
}
