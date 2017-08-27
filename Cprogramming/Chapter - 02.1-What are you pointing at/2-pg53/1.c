#include<stdio.h>
void fortune_cookie(char msg[]){
	printf("Message reads: %s\n",msg);
}
int main(){
	
	char quotes[]="Cookie makes you fat";
	fortune_cookie(quotes);//you don't need to pass pointers for array,address of array is in it first character
	return 0;
}
	