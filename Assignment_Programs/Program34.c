//complete
//34 - Write a C program to know permission of any file.

#include "sys\stat.h"
#include "stdio.h"
#define FILENAME "D:\\Sample1.txt"		//enter file location here
void main(){
    struct stat status;		//It is a system struct that is defined to store information about files
    stat(FILENAME,&status); //gets status information about a specified file and places it in the area of memory pointed to by the buf argument.
	
    if(status.st_mode & S_IREAD)
    	printf("You have read permission.\n");
    if(status.st_mode & S_IWRITE)
        printf("You have write permission. \n");
}
