#include<stdio.h>    
#include<stdlib.h>  

void dectobin();

void  main(){  
	int a[10],n;    
	printf("Enter the number to convert: ");    
	scanf("%d",&n);   
	dectobin(a,n); //function call
}  

//function to convert dec number to binary
void dectobin(int *a, int n)
{
	int i;
	for(i=0;n>0;i++)    
	{    
		a[i]=n%2;    	//divide number by 2 and save remainder in array
		n=n/2;    
	}    
	printf("\nBinary of Given Number is=");    
	for(i=i-1;i>=0;i--)    
	{    
		printf("%d",a[i]); //print array in reverse order to get binary fromat 
	} 	
}
