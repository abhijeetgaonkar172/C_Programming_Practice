//6 using structure complete
//6- Write a C program to store Name and 10 digits mobile number of 20 users (Use 3 dimentional character array)
 

#include <stdio.h>
#define NAMEARRAYSIZE 50
#define MOBNOARRAYSIZE 11
#define USERARRAYSIZE 20

//define structure of employee
struct employee {
    char Name[NAMEARRAYSIZE];
    char Mobno[MOBNOARRAYSIZE];
} e[USERARRAYSIZE];

void main(){
	int i;

	printf("Employee Details\n");
	printf("Enter Name  Mobile Number\n");
	//Take input from user
	for(i=0;i<USERARRAYSIZE;i++){
		scanf("%s %s",e[i].Name,e[i].Mobno);
	}
	
	//print data of employee
	printf("\nName \t\t Mobile Number");
	for(i=0;i<20;i++){
		printf("\n%s\t\t  %s",e[i].Name,e[i].Mobno);
	}	
}
