//Complete
//37 - Write a C program which deletes the duplicate element of an array.

#include <stdio.h>
int n; 		//declare global variable

//function declaration
void printarray();
void inputarray();
void delduplicatenum();


void main(){
	
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

	//call delduplicatenum function 
	delduplicatenum(a);
	
	//print modified array 1
	printf("\nModified Array: ");
	printarray(a,n);
}

//function to delete duplicate number of an array
void delduplicatenum(int *a)
{
	int i,j,k;
 // use nested for loop to find the duplicate elements in array  
    for ( i = 0; i < n; i ++)  
    {  
        for ( j = i + 1; j < n; j++)  
        {  
            // use if statement to check duplicate element  
            if ( a[i] == a[j])  
            {  
                // delete the current position of the duplicate element               	
                for ( k = j; k < n - 1; k++)  
                {  
                    a[k] = a[k + 1];  
                }  
                // decrease the size of array after removing duplicate element  
                n--;  
            
            // if the position of the elements is changes, don't increase the index j  
                j--;      
            }  
        }  
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
