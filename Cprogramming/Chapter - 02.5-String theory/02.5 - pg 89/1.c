#include<stdio.h>
#include<string.h>
int main(){
	char s0[]="dydsfunctional";
	char s1[]="fun";
	if(strstr(s0,s1)){
		puts("I found the fun in dysfunctional");
	}
	else{
		puts("Did not find fun");
	}
	return 0;
}