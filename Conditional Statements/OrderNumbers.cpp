#include <iostream>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;

	printf("Please input 5 numbers.  The value of these numbers changes the order they are returned in: ");
	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);

	int sum = a + b + c + d + e;

	if (sum == 0)
	{
		printf("The numbers are being returned in the same order: %d %d %d %d %d", a, b, c, d, e);
	}
	else if (sum > 0)
	{
		printf("The numbers are being returned in the same order: %d %d %d %d %d" ); //needs to order them
	}
	else
	{
		printf("The numbers are being returned in the same order: %d %d %d %d %d"); //needs to order them
	}

}
