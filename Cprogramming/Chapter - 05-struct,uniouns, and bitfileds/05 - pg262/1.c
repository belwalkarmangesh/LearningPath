#include<stdio.h>
typedef struct{
	unsigned int first_visit:1;
	unsigned int come_again:1;
	unsigned int fingers_lost:4;
	unsigned int shark_attack:1;
	unsigned int days_of_week:3;
}survey;

int main()
{
printf("\nfirst_visit %i\n, come_again %i\n, fingers_lost %i\n, shark_attack %i\n, days_of_week %i",1,1,5,1,2);
return 0;
}
