#include<stdio.h>
#include<string.h>
#define MAXCHARSIZE	50

int stringlen(char[]);


void main() {
	char s1[MAXCHARSIZE];
	printf("\nEnter String 1 :");
	gets(s1);						//take string input
	char *p = s1;
	int n = stringlen(p);
	printf("\nLength of string is :%d", n);
}

//function to find string length
int stringlen(char *p){
	int i=0;
	//keep counting until null character appears 
	while(*(p+i)!='\0'){
		i++;
	}
	return i;
}
