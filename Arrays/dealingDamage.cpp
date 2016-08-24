#include <iostream>

int main()
{
	int health[6] = { 0, 100, 100, 100, 100, 100};
	int tempTarget;
	int ranNum;

	ranNum = rand() % 21 + 30;

	for (int i = 0; i < 5; i++)
	{
		ranNum = rand() % 21 + 35;

		if (i == 0)
		{
			printf("Please choose to attack one of the 5 players by typing in 1, 2, 3, 4 or 5.\nThen press enter.\n");
		}
		else
		{
			printf("\nPlease choose the next hero to hit.\n");
		}
		scanf_s("%d", &tempTarget);

		while (tempTarget > 5 || tempTarget < 1 || health[tempTarget] <= 0)
		{
			if (health[tempTarget] <= 0 && tempTarget <= 5 && tempTarget >= 1)
			{
				printf("Please choose an undefeated enemy.\n");
				scanf_s("%d", &tempTarget);
			}
			else
			{
				printf("Please choose a number between 1 and 5.\n");
				scanf_s("%d", &tempTarget);
			}
		}

		health[tempTarget] = health[tempTarget] - ranNum;

		printf("You have successfully hit hero %d for %d damage!  ", tempTarget, ranNum);
		
		if (health[tempTarget] <= 0)
		{
			printf("Hero %d has been defeated!\n", tempTarget);
		}
	}

	printf("\n");

	for (int o = 1; o < 6; o++)
	{
		if (health[o] < 0)
		{
			health[o] = 0;
		}
		printf("\nHero %d:  %d health", (o), health[o]);
	}
	printf("\n");
	printf("\n");
	system("pause");
}