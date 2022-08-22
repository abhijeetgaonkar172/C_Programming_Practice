//complete

#include <stdio.h>

void main(){
int a,b,c,max;	//declaring all the required variables

//take input of 3 numbers from the user
printf("Enter 3 numbers:");
scanf("%d %d %d", &a, &b, &c); 

max = largest_number(a,b,c); //function call returns a integer

printf("The Largest Number is: %d",max); 	//print max number
}

//function to find the largest integer number
int largest_number (int a, int b, int c){
int max;
max = a;	//store value of "a" in temporary variable "max"
	
	//compare max with b
	if(max<b)
		max = b;
    	
	//compare max with c
	if(max<c)
		max = c;

}
