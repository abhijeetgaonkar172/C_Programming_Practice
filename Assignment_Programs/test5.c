#include <stdio.h>
void main()
{
	int n,r,q1,q2;
	printf("Enter a Number: ");
	scanf("%d",&n);
	
	while(n>0){
		r = n%100;
		q1 = n/100;
		n=r;
		r = n%10;
		q2 = n/10;
		n = r/10;
	}
	
	printf("Number in words: ");
	
	switch(q1)    
		{    
			case 0:    
				printf("zero ");    
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
				printf("tttt");    
				break;    
		}    

	switch(q2)    
		{    
			case 0:    
				printf("zero ");    
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
				printf(" Fourty");    
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
				printf(" Zero ");    
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
