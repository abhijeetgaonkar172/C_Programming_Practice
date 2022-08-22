//complete

#include <stdio.h>

void main(){
	FILE *fp;	//declare a file pointer
    char c;

    fp = fopen(__FILE__, "r"); //read content from thw working file
    
    //to print all characters in the file
	do{
    	c = getc(fp);	//get characters from file 
    	putchar(c);		//display each char
    	
	}while(c!=EOF);
	
	fclose(fp);	//close the file
    
}
