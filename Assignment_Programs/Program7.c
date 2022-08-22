//complete
//7- Write a C program to search and print Namea and mobile Number from above database.

#include <stdio.h>
#include <string.h>
#define NAMEARRAYSIZE 50
#define MOBNOARRAYSIZE 11
#define USERARRAYSIZE 20

//function declaration
void search();	

//define structure of employee
struct employee {
    char Name[NAMEARRAYSIZE];
    char Mobno[MOBNOARRAYSIZE];
} e[USERARRAYSIZE];


void main(){
	int i;
	char s[NAMEARRAYSIZE];

	printf("Employee Details\n");
	printf("Enter Name  Mobile Number\n");
	//Take input from user
	for(i=0;i<USERARRAYSIZE;i++)
	{
		scanf("%s %s",e[i].Name,e[i].Mobno);
	}
	
	//print data of employee
	printf("\nName \t\t Mobile Number");
	for(i=0;i<20;i++)
	{
		printf("\n%s\t\t  %s",e[i].Name,e[i].Mobno);
	}
	//input name to search
	printf("\n\nEnter name you want to search: ");
	scanf("%s",s);
	search(e,s); 		//search function call
}

//function to search name and display all the deatils
void search(struct employee e[], char s[])
{
	int i;
    for (i = 0; i < USERARRAYSIZE; i++)
    {
		// comparing strings str1 and str2, returns 0 if equal
    	if (strcmp(e[i].Name, s) == 0)
        {	printf("Record Found");
        	printf("\nName \t\t Mobile Number");
        	printf("\n%s\t\t  %s",e[i].Name,e[i].Mobno);
        	return;
        } 
    }
    printf("Record not Found\n");
}
