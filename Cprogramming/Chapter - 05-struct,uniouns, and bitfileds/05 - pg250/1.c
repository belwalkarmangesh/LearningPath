#include<stdio.h>
typedef union{
	float lemon;
	int lime_pieces;
}lemon_lime;
typedef struct{
	float tequilla;
	float cointreau;
	lemon_lime citrus;
} margarita;
int main()
{
	margarita m={2.0,1.0,{0.5}};
	printf("\n%2.1f measures of tequilla\n%2.1f measures of cointereau\n%2.1f measures of juice\n",m.tequilla,m.cointreau,m.citrus.lemon); 
	printf("\n\n");
	margarita m1={2.0,1.0,{2}};
	printf("%2.1f measures of tequilla\n%2.1f measures of cointereau\n%2.1f measures of juice\n",m1.tequilla,m1.cointreau,m1.citrus.lemon);
	printf("\n\n");
	margarita m2={2.0,1.0,{.lime_pieces=1}};
	printf("%2.1f measures of tequilla\n%2.1f measures of cointereau\n%i measures of juice\n",m2.tequilla,m2.cointreau,m2.citrus.lime_pieces);
	
	return 0;
}
