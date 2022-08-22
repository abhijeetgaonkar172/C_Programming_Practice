//Complete
//15- Write a C program to convert number in word.(100 as "One Hundred", 10 as "Ten",120 as"One Hundred Twenty")

#include <stdio.h>
void main()
{
	int n,r,q1,q2;
	printf("Enter a Number: ");
	scanf("%d",&n);
	
	while(n>0)
	{
		r = n%100;
		q1 = n/100;		//Hundred's
		n=r;
		r = n%10;		//Unit's
		q2 = n/10;		//Ten's
		n = r/10;		
	}
	
	printf("Number in words: ");
	
	switch(q1)    
		{    
			case 0:    
				printf("");    
				break;		
			case 1:    
				printf("One Hundred");    
				break;    
			case 2:    
				printf("Two Hundred");    
				break;    
			case 3:    
				printf("Three Hundred");    
				break;    
			case 4:    
				printf("Four Hundred");    
				break;    
			case 5:    
				printf("Five Hundred");    
				break;    
			case 6:    
				printf("Six Hundred");    
				break;    
			case 7:    
				printf("Seven Hundred");    
				break;    
			case 8:    
				printf("Eight Hundred");    
				break;    
			case 9:    
				printf("Nine Hundred");    
				break;        
			default:    
				printf("Enter number in Hundreds");    
				break;    
		}    

	switch(q2)    
		{    
			case 0:    
				printf("");    
				break;		
			case 1:    
				printf(" Ten");    
				break;    
			case 2:    
				printf(" Twenty");    
				break;    
			case 3:    
				printf(" Thirty");    
				break;    
			case 4:    
				printf(" Forty");    
				break;    
			case 5:    
				printf(" Fifty");    
				break;    
			case 6:    
				printf(" Sixty");    
				break;    
			case 7:    
				printf(" Seventy");    
				break;    
			case 8:    
				printf("Eighty");    
				break;    
			case 9:    
				printf(" Ninety");    
				break;        
			default:    
				printf(" tttt");    
				break;    
		}    
		
	switch(r)    
		{    
			case 0:    
				printf("");    
				break;		
			case 1:    
				printf(" One ");    
				break;    
			case 2:    
				printf(" Two ");    
				break;    
			case 3:    
				printf(" Three ");    
				break;    
			case 4:    
				printf(" Four ");    
				break;    
			case 5:    
				printf(" Five ");    
				break;    
			case 6:    
				printf(" Six ");    
				break;    
			case 7:    
				printf(" Seven ");    
				break;    
			case 8:    
				printf(" Eight ");    
				break;    
			case 9:    
				printf(" Nine ");    
				break;        
			default:    
				printf(" tttt");    
				break;    
		}   
}

/*
#include<stdio.h>    
#include<stdlib.h>  
int main(){  
	long int n,sum=0,r;      
	printf("enter the number=");    
	scanf("%ld",&n);    
	while(n>0)    
	{    
		r=n%10;    
		sum=sum*10+r;    
		n=n/10;    
	}    
	n=sum;    
	while(n>0)    
	{    
		r=n%10;    
		switch(r)    
		{    
			case 0:    
				printf("zero ");    
				break;		
			case 1:    
				printf("one ");    
				break;    
			case 2:    
				printf("two ");    
				break;    
			case 3:    
				printf("three ");    
				break;    
			case 4:    
				printf("four ");    
				break;    
			case 5:    
				printf("five ");    
				break;    
			case 6:    
				printf("six ");    
				break;    
			case 7:    
				printf("seven ");    
				break;    
			case 8:    
				printf("eight ");    
				break;    
			case 9:    
				printf("nine ");    
				break;        
			default:    
				printf("tttt");    
				break;    
		}    
		n=n/10;    
	}    
	return 0;  
}*/  
