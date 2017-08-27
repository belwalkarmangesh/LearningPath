#include<stdio.h>
typedef struct{
	const char *name;
	const char *species;
	int age;
} turtle;

void happy_birthday(turtle t)
{
	t.age=t.age+1;
	printf("Happy Birthday %s! You are now %i years old!\n",t.name,t.age);
}
int main()
{
	turtle myturtle={"MyTurle","Leatherback sea turtle",99};
	happy_birthday(myturtle);
	printf("%s's age is now %i\n",myturtle.name,myturtle.age);
	return 0;	
}