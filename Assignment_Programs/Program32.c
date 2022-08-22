//complete
//32 - Write a C program to find out size of any file.

#include <stdio.h>
#define FILENAME "D:\\Sample1.txt"

long int findSize();


void main()
{
    char file_name[] = { FILENAME };	//enter file location here
    long int res = findSize(file_name);		//function call
    if (res != -1)
        printf("Size of the file is %ld bytes \n", res);
}
  
//function to find size of file 
long int findSize(char file_name[])
{
    // opening the file in read mode
    FILE* fp = fopen(file_name, "r");
  
    // checking if the file exist or not
    if (fp == NULL) {
        printf("File Not Found!\n");
        return -1;
    }
  
    fseek(fp, 0L, SEEK_END);//file pointer at the end of file 
  
    // calculating the size of the file
    long int res = ftell(fp);	//returns current position of file pointer
  
    // closing the file
    fclose(fp);
  
    return res;
}
