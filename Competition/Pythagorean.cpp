#include <iostream>

int main()
{
	int a;
	int b;
	int c;
	int k;
	float temp1;
	float temp2;

	printf("Please input a positive integer great than 5.\n");
	scanf_s("%d", &k);


	for (int a = 1; a <= k; a++)
	{
		for (int b = 1; b <= k; b++)
		{
			for (int c = 1; c <= k; c++)
			{
				if ((a*a) + (b*b) == c*c && c <= k)
				{
					printf("%d %d %d\n", a, b, c);
				}
			}
		}
	}
	system("pause");
}