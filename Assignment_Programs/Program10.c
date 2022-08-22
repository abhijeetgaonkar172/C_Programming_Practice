//complete
//10- Search and Delete an user's entry from above database (search with Name/Mobile_No).

#include <stdio.h>
#include <string.h>
#define NAMEARRAYSIZE 50
#define MOBNOARRAYSIZE 11
#define USERARRAYSIZE 20

//function declaration
void printdatabase();
int searchndelete();

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
	
	//input name to search
	printf("\n\nEnter name you want to search and delete: ");
	scanf("%s",s);
	int x = searchndelete(e,s); 		//search function call
	//returns 1 if name found orelse returns 0
	if(x == 1){
		printf("\n\nEmployee Database after deleting %s's entry\n",s);
		printdatabase(e);	
	}
	else{
		printf("Record Not Found");
	}
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

//function to delete a number at given position
int searchndelete(struct employee e[], char s[])
{
	int i,j;
    for (i = 0; i < USERARRAYSIZE; i++)
    {
		// comparing strings str1 and str2
    	if (strcmp(e[i].Name, s) == 0)
        {	printf("Record Found");
        	printf("\nName \t\t Mobile Number");
        	printf("\n%s\t\t  %s",e[i].Name,e[i].Mobno);
        	//for deleting and shifting entries to left
        	for (j = i; j < USERARRAYSIZE; j++)
        	{
				strcpy(e[j].Name, e[j+1].Name);	//shift name entry to left
				strcpy(e[j].Mobno, e[j+1].Mobno);	//shift mob no entry to left
			}
			return 1;
        } 
    }
    return 0;
}
