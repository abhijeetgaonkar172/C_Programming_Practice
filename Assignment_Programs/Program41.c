//complete
//41 - Write a C program for concatenation two string using pointer.

#include<stdio.h>
#define MAXCHARSIZE	50
#define MINCHARSIZE 30

//function declaration
void concat(char[], char[]);
int stringlen(char[]);
   
//main
void main() {
	char s1[MAXCHARSIZE], s2[MINCHARSIZE];	//declare 2 char arrays for storing strings
	char *p1,*p2;					//declare 2 pointers
	printf("\nEnter String 1 :");
	gets(s1);						//take string input
	printf("\nEnter String 2 :");
	gets(s2);						//take string input
	p1 = s1;						//p1 pointing at s1
	p2 = s2;						//p2 pointing at s2
	concat(p1, p2);					//function call pass pointers of 2 strings
	printf("\nConcated string is :%s", s1);
}

//function to concatenate 2 strings using pointers
void concat(char *s1, char *s2) {
	int i, j;
	i = stringlen(s1);		//stringlen function call 
	for (j = 0; *(s2+j) != '\0'; i++, j++) {
		*(s1+i) = *(s2+j);					//add 1st char of s2 to null character of s1 and so on..
	}
	*(s1+i) = '\0';				//add null character at the end of char array
}

//function to find string length
int stringlen(char *s1){
	int i=0;
	//keep counting until null character appears 
	while(*(s1+i)!='\0'){
		i++;
	}
	return i;
}

