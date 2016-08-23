#include <iostream>

int main()
{
	char a = 0;
	char b = 0;
	char c = 0;

	printf("Please input 2 lowercase letters: ");
	scanf_s("%c %c", &a, 1, &b, 2);
	getchar();

	a = ((a - 65) % 32) + 65;
	b = ((b - 65) % 32) + 65;

	c = (a + b) / 2;

	printf("\nThe average letter is: %c", c);
	printf("\n");
	system("pause");
}