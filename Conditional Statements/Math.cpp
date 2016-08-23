#include <iostream>

int main()
{
	float num1 = 0;
	float num2 = 0;
	char operation = 0;
	float value = 0;

	printf("Please input 2 numbers with a +, -, *, /, or % symbol between them.\n");
	scanf_s("%f %c %f", &num1, &operation, 1, &num2);
	getchar();
	
	if (operation == '+')
	{
		value = num1 + num2;
	}

	if (operation == '-')
	{
		value = num1 - num2;
	}

	if (operation == '*')
	{
		value = num1 * num2;
	}

	if (operation == '/')
	{
		value = num1 / num2;
	}

	if (operation == '%')
	{
		int int1 = num1;
		int int2 = num2;

		value = int1 % int2;
	}
	printf("Result is: %f", value);
	system("pause");

}
