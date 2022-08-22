/*43 - Write a program to add a node in a single link list,to print the list, to delete a node form a list, also search a node with Lamp_NO.
       Use Dynamic memory allocations to creat a node. Write different functions for add,print and delete and search, pass the structure as an 
	   argument to this functions for call by reference.*/ 

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <inttypes.h>

//declare functions
void insertnode();
void printlist();
void searchlist();

//creat a node with elements as given bellow.
struct stLamp_Detail_t
{
 uint8_t Lamp_NO;
 uint8_t Mobile_No[12];
 uint8_t Location[20];
 struct stLamp_Detail_t *Next;  
}; 

//main
void main(){
	struct stLamp_Detail_t* head = NULL;
    struct stLamp_Detail_t* second = NULL;
  	
    //allocate nodes in the heap
    head = (struct stLamp_Detail_t*)malloc(sizeof(struct stLamp_Detail_t));
    
    printf("\nEnter Lamp No: ");
    scanf("%u",&head->Lamp_NO);
    
    printf("\nEnter Mobile No: ");
    scanf("%u",&head->Mobile_No);
    
    printf("\nEnter Location: ");
    scanf("%u",&head->Location);
    
    printf("\nLamp No: %u",head->Lamp_NO);
    printf("\nMobile No: %u",head->Mobile_No);
    printf("\nLocation: %u",head->Location); 
	  	
}
