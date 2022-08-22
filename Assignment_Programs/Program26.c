//complete
//26 - Write a C program to delete a file.

#include<stdio.h>
#define FILENAME "D:\\Sample1.txt"


void main() 
{
   int del = remove(FILENAME); //using remove function return 0 if deleted successfully
   if (del == 0)
      printf("The file is Deleted successfully");
   else
      printf("the file is not Deleted");   
}
