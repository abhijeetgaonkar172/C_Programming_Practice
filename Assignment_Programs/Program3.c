//Incomplete
//3 - Check if the given string is shuffled substring of another sting.

#include <stdio.h>
#include <string.h>
#define MAXARRAYSIZE 100

//global variables
char word[MAXARRAYSIZE];
int wordlastpos = 0;

//function declaration
void extractword();
int checkwordinstr();

//main
void main()
{
	char str1[MAXARRAYSIZE], str2[MAXARRAYSIZE], *ret;
	int l1, l2, position1, position2, position3, word1len;
	strcpy(str1,"Acevin solutions 123");
	strcpy(str2, "Address is solutions 123 Acevin world." );
	
	l1 = strlen(str1);
	l2 = strlen(str2);
	printf("str1 len= %d\nstr2 len= %d\n", strlen(str1), strlen(str2));
	
	if(l1 > l2)
	{
		printf("SHUFFLED STRING NOT FOUND");
	}
	else
	{
		while(wordlastpos != l1-1)
		{
			printf("//while word last position = %d", wordlastpos);
			extractword(str1,l1);					//take one word from str1
			word1len = strlen(word);				//word 1 length
			position1 = checkwordinstr(str2,l2);	//check if word is present in str2 or not, if yes then return the position of it in str2
			if(position1 == 0)
			{
				printf("\nWord not in string");
			}
			else
			{
				printf("\nWord found in string at position = %d and length = %d", position1, word1len);
			}
		}
	}
}

//extract a word from sentence
void extractword(char s[], int length)
{
	int i ,j;
	printf("\nEW word last position = %d", wordlastpos);
	for(i = wordlastpos,j=0 ; isspace(s[i])== 0;i++ ,j++)
	{
		word[j] = s[i];
	}
	word[j] = '\0';
	printf("\nWord = %s",word);
	printf("\ni =  %d",i);
	wordlastpos = i;
	word[0] = '\0';
}

//check if word is present in str2 or not, if yes then return the position of it in str2
int checkwordinstr(char str2[] , int n2)
{
	int i,j = 0,position=0, count =0;
	int n1 = strlen(word);
	if (n2>n1)
	{
		while(j<n1)
		{
			for(i=0;i<n2;i++)
			{
				if (word[j] == str2[i])		//compare each char of str1 with each char of str2
				{
					position = i;
					++count;
					j++;
				}
			}
		}	
		if(count == n1)	//if no of equal char is equal to len of string then strings are equal
		{
			position -= (count-1);
			return position;
		}
		else
			return 0;
	}
	else
		return 0;
}

