//complete
//40 - Write a C program to find largest and smallest number in an array.

#include <stdio.h>

//function declaration
void printarray();
void inputarray();
int largestnum();
int smallestnum();


void main(){
	int n,max,min; 
	
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
	
	//print largest number
	printf("\nLargest number in Array: %d", max);	
	
	//call smallestnum function 
	min = smallestnum(a,n);
	
	//print smallest number
	printf("\nsmallest number in Array: %d", min);	
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

//function to find smallest number of an array
int smallestnum(int *a, int n)
{
	int i, min = a[0];		//store initial value in min
	for(i=0;i<n;i++)
	{
		if(min>a[i])			//if min is greater than a[i] store that value in min
		{
			min = a[i];			//copy content of a in max variable
		}
	}
	return min;
}
