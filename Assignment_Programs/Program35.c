//complete
//35 - Write a C program to know last date of modification of any file.

#include <sys\stat.h>		
#include <stdio.h>
#include <time.h>
#define FILENAME "D:\\Sample1.txt"		//enter file location here


void main(){
	
    struct stat status;									   			   	//It is a system struct that is defined to store information about files
    stat(FILENAME,&status);  											 //gets status information about a specified file and places it in the area of memory pointed to by the buf argument.
    printf("Last date of modification : %s",ctime(&status.st_mtime));	//st_mtime is used to fetch time of last data modification

}
