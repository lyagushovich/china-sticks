#include <stdio.h>

int main(int argc, char const *argv[])
{
	int sticks = 10;
	int round = 1;
	int choose;

	while(sticks > 0)
	{
		printf("\nWe have %d\n", sticks);
		if (round % 2 != 0)
		{
			printf("First player, input yout number of sticks: ");
			scanf("%d", &choose);
			if (choose > sticks || choose > 3 || choose < 1)
			{
				printf("Incorrect number of sticks\n");
				continue;
			}
			else
			{
				sticks -= choose;
				++round;
				continue;
			}
		}
		else if (round % 2 == 0)
		{
			printf("Second player, input yout number of sticks: ");
			scanf("%d", &choose);
			if (choose > sticks || choose > 3 || choose < 1)
			{
				printf("Incorrect number of sticks\n");
				continue;
			}
			else
			{
				sticks -= choose;
				++round;
				continue;
			}
		}
	}
	if (round % 2 == 0)
	{
		printf("\nSecond player win\n");
	}
	else
	{
		printf("\nFirst player win\n");
	}
	return 0;
}