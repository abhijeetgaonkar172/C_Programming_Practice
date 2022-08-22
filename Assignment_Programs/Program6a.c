//Incomplete
//6- Write a C program to store Name and 10 digits mobile number of 20 users (Use 3 dimentional character array)

#include <stdio.h>
#define NAMEARRAYSIZE 2//20
#define MOBNOARRAYSIZE 20//10
#define USERARRAYSIZE 20

void main(){
	char a[USERARRAYSIZE][NAMEARRAYSIZE][MOBNOARRAYSIZE];
	int i, j ,k;
	
	printf("Employee Details\n");
	printf("Enter :\n");
	for(i=0;i<USERARRAYSIZE;i++)
	{
		for(j=0;j<NAMEARRAYSIZE;j++)
		{
			for(k=0;k<MOBNOARRAYSIZE;k++)
			{
				scanf("%s",&a[i][j][k]);
			}
			
		}
	}
}
