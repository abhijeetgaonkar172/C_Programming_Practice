//complete
//11 - store above database in a file

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NAMEARRAYSIZE 50
#define MOBNOARRAYSIZE 11
#define USERARRAYSIZE 20
#define MAXCHARSIZE 100
#define FILENAME "D:\\Sample1.txt"		//add file location here

//function declaration
void printdatabase();
void adddatatofile();

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

	printf("\n\nEmployee Database\n");
	printdatabase(e);	//print database
	
	adddatatofile(e);
	
}

//function to add database to a file
void adddatatofile(struct employee e[]){
	int i; char str[MAXCHARSIZE];
	FILE *fptr;			//file pointer

	// open file for writing
	fptr = fopen(FILENAME,"a"); //append mode
	
	if(fptr == NULL)
	{
	  printf("Error!");   
	  exit(1);             
	}
	
	fprintf(fptr,"\nName \t\t Mobile Number");
	for(i=0;i<20;i++)
	{
		printf("\n%s\t\t  %s",e[i].Name,e[i].Mobno);
		fprintf(fptr,"\n%s\t\t  %s",e[i].Name,e[i].Mobno);
	}
	//fprintf(fptr,"%s",str);
	//fputs(str,fptr);
	printf("\n\nString is added in file");
	fclose(fptr);	
}

//function to print data of employee
void printdatabase(struct employee e[]){
	int i;
	printf("\nName \t\t Mobile Number");
	for(i=0;i<20;i++)
	{
		printf("\n%s\t\t  %s",e[i].Name,e[i].Mobno);
	}	
}
