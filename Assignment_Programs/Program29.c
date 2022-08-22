//complete
//29 - Wrtie a C program which display source code as a output.

#include <stdio.h>


void main(){
	FILE *fp;	//declare a file pointer
    int c;

    fp = fopen(__FILE__, "r"); //read content from the working file
    
   	if(fp == NULL)
	{
	  printf("Error!");   
	  exit(1);             
	}
    
    //to print all characters in the file
	do{
    	c = getc(fp);	//get characters from file 
    	putchar(c);		//display each char
    	
	}while(c!=EOF);
	
	fclose(fp);	//close the file
    
}
