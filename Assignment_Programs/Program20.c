#include<stdio.h>
#define MAXCHARSIZE	50
#define MINCHARSIZE 30

void concat(char[], char[]);
int stringlen(char[]);


void main() {
	char s1[MAXCHARSIZE], s2[MINCHARSIZE];
	printf("\nEnter String 1 :");
	gets(s1);						//take string input
	printf("\nEnter String 2 :");
	gets(s2);						//take string input
	concat(s1, s2);					//function call pass 2 strings
	printf("\nConcated string is :%s", s1);
}

//function to concatenate 2 strings
void concat(char s1[], char s2[]) {
	int i, j;
	i = stringlen(s1);		//stringlen function call 
	for (j = 0; s2[j] != '\0'; i++, j++) {
		s1[i] = s2[j];					//add 1st char of s2 to null character of s1 and so on..
	}
	s1[i] = '\0';				//add null character at the end of char array
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
