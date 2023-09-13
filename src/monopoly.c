#include "../include/monopoly_simu.h"

int run_engine(int argc, t_map *map)
{
	int i;
	int answer;
	int dice;
	int n_p;
	int temp;

	dice = 0;
	n_p = 0;
	temp = 0;
	i = 0;
    while (map->on == 1)
    {	
		dice = roll_dice();
		n_p = map->players[i].player_position + dice;
		if (n_p >= SQUARE_NUMBER)
		{
			temp = SQUARE_NUMBER - n_p;
			map->players[i].player_position = temp;
		}
		else
			map->players[i].player_position = n_p;
		printf("\n\n\n====>Its %s turn!\n", map->players[i].player_name);
		printf("=> You roled: %d you are now in: %s!\n", \
		dice, map->squares[map->players[i].player_position].name);
		if (action(map, i) == FAILURE)
			return (FAILURE);
		printf("OUT OF action1\n");
		printf("If you want to negotiate please type one of the following options:\n");
		printf(" 1.Buy a Square\n 2.Build something\n 3.Take a nap\n 0.Pass turn!\n");
		scanf("%d", &answer);
		if (answer == 0)
       	{
			printf("Passing the turn!\n");
		}
		else if (answer == 1)
			printf("Test engine\n");
		else if (answer == 2)
			printf("Test engine\n");
		else
		{
			printf("Invalid Input Error\n");
			i--;
		}
		answer = -1;
		i++;
		if (i == argc - 2)
			i = 0;
		printf("Completed one iteration\n");
    }
	return (SUCCESS);
}