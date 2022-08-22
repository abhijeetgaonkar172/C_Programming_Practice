//practice
#include <stdio.h>
void main(){
unsigned char bytes[4];
unsigned long n = 175;

bytes[0] = (n >> 24) & 0xFF;
bytes[1] = (n >> 16) & 0xFF;
bytes[2] = (n >> 8) & 0xFF;
bytes[3] = n & 0xFF;
printf("%u%u%u%u",bytes[0], bytes[1], bytes[2], bytes[3]);

}
	/*

char a[10] ={'A','B','C' ,'D', 'E'} ;

int var =1000;
//a[4] = var;
*((int*)&a[5]) = var;
printf("a = %d %d %d %d",a[4],a[5],a[6],a[7]);

*/

