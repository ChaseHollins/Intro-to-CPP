#include <iostream>

int main()
{
	int a = 0;
	int b = 0;

	printf("Please input 2 numbers: ");
	scanf_s("%d %d", &a, &b);

	if (a > b)
	{
		printf("%d is the larger number.\n", a);
	}
	else if (b > a)
	{
		printf("%d is the larger number.\n", b);
	}
	else
	{
		printf("The numbers are equal.\n");
	}

	system("pause");
}
