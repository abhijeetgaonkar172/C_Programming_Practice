//complete
//24- Write a C program to Copy a string without using predefined function.
#include <stdio.h>
#include <string.h>
#define MAXCHARSIZE 50

void copystring();
int stringlen();


void main()
{
	char str1[MAXCHARSIZE], str2[MAXCHARSIZE]; 		//declare char arrays
 	printf("Enter the string 1: ");
	gets(str2);			//take string input
	printf("String 1: %s",str2);
	int n = stringlen(str1);	//strlen function for length
	copystring(str1,str2, n);		//copystring function call
	printf("\nCopied String 1 to String 2: %s",str1);	
		
}

//function to copy str2 to str1
void copystring(char str1 [], char str2[], int n){
	int i,j;
	for(i=0;i<n;i++){		
		str1[i] = str2[i];		//copy each char from str2 to str1
	}
} 

//function to find string length
int stringlen(char s1[]){
	int i=0;
	//keep counting until null character appears 
	while(s1[i]!='\0'){
		i++;
	}
	return i;
}
