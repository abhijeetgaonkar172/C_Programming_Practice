//complete
//12 - Read database from a file.

#include <stdio.h>
#define FILENAME "D:\\Sample1.txt"		//add file location here

void main()
{
	FILE *fp;	//declare a file pointer
    char c;

    fp = fopen(FILENAME, "r"); //read content from thw working file
    
    //to print all characters in the file
	do{
    	c = getc(fp);	//get characters from file 
    	putchar(c);		//display each char
    	
	}while(c!=EOF);
	
	fclose(fp);	//close the file
}
