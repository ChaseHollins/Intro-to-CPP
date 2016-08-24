#include <iostream>

int main()
{
	int total = 0;
	int i = 0;

	while (i < 999)
	{
		i++;

		if (i % 3 == 0 || i % 5 == 0)
		{
			printf("%d\n", i);
			total = total + i;
		}
	}

	printf("%d\n", total);
	system("pause");
}