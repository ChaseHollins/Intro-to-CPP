#include <iostream>


int main()
{
	int month;

	int days1 = 31;
	int days2 = 28;
	int days3 = 31;
	int days4 = 30;
	int days5 = 31;
	int days6 = 30;
	int days7 = 31;
	int days8 = 31;
	int days9 = 30;
	int days10 = 31;
	int days11 = 30;
	int days12 = 31;
	int day;

	printf("Please enter in a month's number to learn the number of days in it.\nThen press enter.\n");
	scanf_s("%d", &month);

	if (month == 1)
	{
		day = days1;
	}
	else if (month == 3)
	{
		day = days3;
	}
	else if (month == 4)
	{
		day = days4;
	}
	else if (month == 5)
	{
		day = days5;
	}
	else if (month == 6)
	{
		day = days6;
	}
	else if (month == 7)
	{
		day = days7;
	}
	else if (month == 8)
	{
		day = days8;
	}
	else if (month == 9)
	{
		day = days9;
	}
	else if (month == 10)
	{
		day = days10;
	}
	else if (month == 11)
	{
		day = days11;
	}
	else if (month == 12)
	{
		day = days12;
	}

	if (month > 0 && month < 13)
	{
		if (month == 2)
		{
			printf("Month 2 of the year usually has 28 days in it.  On leap years is has 29 days.\n");
		}
		else
		{
			printf("Month %d of the year has %d days in it.\n", month, day);
		}
	}
	else
	{
		printf("The number you entered does not correspond to a month.  Please restart the program and try again.\n");
	}

	system("pause");
}