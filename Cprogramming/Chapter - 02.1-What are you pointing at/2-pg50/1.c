#include<stdio.h>
void go_south_east(int *lat,int *lon){ //reading the values of lattitude & longitude
	*lat=*lat-1;
	*lon=*lon+1;
}
int main(){
	
	int lattitude=32;
	int longitude=-64;
	go_south_east(&lattitude,&longitude);//passing the pointer to address of lattitude & longitude
	printf("Avast! Now at [%i,%i]",lattitude,longitude);
	return 0;
}