//complete
//9- Add a user at it's position (according to ascending order), in above database.

#include <stdio.h>
#include <string.h>
#define NAMEARRAYSIZE 50
#define MOBNOARRAYSIZE 11
#define USERARRAYSIZE 20

//function declaration
void printdatabase();
void sort();	

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
	for(i=0;i<USERARRAYSIZE;i++)
	{
		scanf("%s %s",e[i].Name,e[i].Mobno);
	}
	
	printf("\n\nEmployee Database\n");
	printdatabase(e);	//print database

	sort(e); 		//sort database function call
	
	printf("\n\nEmployee Database after sorting according to names\n");
	printdatabase(e);

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

//function to sort database according to names
void sort(struct employee e[])
{
	char s1[NAMEARRAYSIZE], s2[MOBNOARRAYSIZE]; //temporary variables 
	int i,j;
	for(i=0;i<USERARRAYSIZE;i++)
	{
	   for(j=i+1;j<USERARRAYSIZE;j++)
	   {
			if(strcmp(e[i].Name,e[j].Name)>0)	//if the first non-matching character in str1 is greater (in ASCII) than that of str2 return positive value
			{
				//sorting names
				strcpy(s1,e[i].Name);
				strcpy(e[i].Name,e[j].Name);
				strcpy(e[j].Name,s1);
				
				//sorting mobile number
				strcpy(s2,e[i].Mobno);
				strcpy(e[i].Mobno,e[j].Mobno);
				strcpy(e[j].Mobno,s2);
			}
	   }
	}
		
}
