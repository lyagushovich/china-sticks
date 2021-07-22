#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
	int sticks = 10;
	int round = 1;
	int choose;
	int play_again;

	while(true)
	{
		if (sticks <= 0 && round % 2 == 0)
		{
			printf("\nSecond player win\n");
			printf("Do you want play again(1-yes / 0-no): \n");
			scanf("%d", &play_again);
			
			if(play_again == 1)
			{
				sticks = 10;
				round = 0;
				continue;
			}
			else
			{
				break;
			}
		}
		else if (sticks <= 0 && round % 2 != 0)
		{
			printf("\nFirst player win\n");
			printf("Do you want play again(1-yes / 0-no): ");
			scanf("%d", &play_again);
			
			if(play_again == 1)
			{
				sticks = 10;
				round = 0;
				continue;
			}
			else
			{
				break;
			}
		}

		printf ("\033[0d\033[2J"); //clear console
		printf("\nWe have %d\n", sticks);
		if (round % 2 != 0)
		{
			printf("First player, input yout number of sticks: ");
			scanf("%d", &choose);
		}
		else
		{
			printf("Second player, input yout number of sticks: ");
			scanf("%d", &choose);
		}
		
		if (choose > sticks || choose > 3 || choose < 1)
		{
			printf("\nIncorrect number of sticks\n");
			continue;
		}
		else
		{
			sticks -= choose;
			++round;
			continue;
		}
	
	}
	return 0;
}