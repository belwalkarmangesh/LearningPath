#include<stdio.h>

void go_south_east(int lat,int lon){
	
	lat=lat-1;
	lon=lon+1;
}
int main(){
	int lattitude=32;
	int longitude=-64;
	go_south_east(lattitude,longitude);
	printf("Avast! Now at [%i,%i]",lattitude,longitude);	
	return 0;
}