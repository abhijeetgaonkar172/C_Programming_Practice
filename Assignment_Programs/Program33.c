//complete
//33 - Write a C program to know file type of file.
//https://pubs.opengroup.org/onlinepubs/7908799/xsh/sysstat.h.html
//https://www.gnu.org/software/libc/manual/html_node/Testing-File-Type.html

#include "sys\stat.h"
#include "stdio.h"
#include <stdlib.h>
void main(){
    struct stat status;
    FILE *fp;
    stat("D:\\Sample1.txt",&status); //gets status information about a specified file and places it in the area of memory pointed to by the buf argument.
	
    if((status.st_mode & S_IFMT) == S_IFREG)
    	printf("regular file. \n");
    if((status.st_mode & S_IFMT) == S_IFCHR)
    	printf("character-oriented device file. \n");
    if((status.st_mode & S_IFMT) == S_IFDIR)
    	printf("directory file. \n");
    if((status.st_mode & S_IFMT) == S_IFBLK)
    	printf("block-oriented device file. \n");
    if((status.st_mode & S_IFMT) == S_IFIFO)
    	printf("FIFO or pipe. \n");
}
