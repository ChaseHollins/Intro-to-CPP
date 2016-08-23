#include <iostream>

int main()
{
	int One = 0;
	int Two = 0;
	int Three = 0;

	printf("Insert a new value for var one: \n");
	scanf_s("%d", &One);
	printf("Insert a new value for var two: \n");
	scanf_s("%d", &Two);
	printf("The variables are currently: %d and %d \n", One, Two);

	Three = One;
	One = Two;
	Two = Three;

	printf("The variables are now: %d and %d \n", One, Two);
	getchar();
	getchar();

}