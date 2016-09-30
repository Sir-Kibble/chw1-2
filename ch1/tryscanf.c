#include <stdio.h>

int main(){

	char name[40];
	printf("Enter your name: ");
	scanf("%39s", name);
	printf("Hi, %s\n", name);


	char food[5];
	printf("Enter favorite food: ");
	scanf("%s", food);
	// fgets(food, sizeof(food), stdin);
	printf("Favorite food is %s\n", food);
 	return 0;
}
