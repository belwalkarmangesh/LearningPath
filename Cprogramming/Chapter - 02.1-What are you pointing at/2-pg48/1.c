/* This program shows the use of memory pointers */
#include<stdio.h>
int main(){
	
	int x=4;
	printf("X lives at %p\n",&x); // %p format will print the location in hex.
	int *address_of_x=&x;// This is a pointer variable for address that stores an int.
	int value_stored=*address_of_x; // reads the content of an address
	printf("value of x at %p is %i\n",*address_of_x,value_stored);
	*address_of_x=99;
	int newvalueofx=*address_of_x;
	printf("New value of X %i\n",newvalueofx);
	return 0;
}
