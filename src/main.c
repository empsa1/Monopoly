#include "../include/monopoly_simu.h"

void	clear()
{
	int i;

	i = 0;
	while (i++ < 10000)
		printf("\n");
}

int	loadin(int c)
{
	long i;

	i = 0;
	if ( c == 0)
		return (SUCCESS);
	while (i++ < 100)
	{
		printf("=");
		usleep(10000);
	}
	printf("\n");
	c -= 1;
	return (loadin(c));
}

int	main(int argc, char **argv)
{
	t_map	map;

	clear();
	if (argc > 2 && argc <= 10 && strcmp(argv[1], "Monopoly") == TRUE)
	{
		//loadin(10);
		printf("Welcome to the Monopoly Board Game!\n");
		if (init_map(&map, argc) == FAILURE)
			return (FAILURE);
		printf("===>  Created the Map!  <===\n");
		loadin(2);
		if (init_player(argv, &map) == FAILURE)
			return (FAILURE);
		printf("===> Loaded the Players! <===\n");
		loadin(2);
		if (init_squares(&map) == FAILURE)
			return (FAILURE);
		printf("===> Loaded Map Squares! <===\n");
		loadin(2);
		if (init_neigh(&map) == FAILURE)
			return (FAILURE);
		printf("===> Assigned Neighboorhoods! <===\n");
		loadin(2);
		if (init_buildings(&map) == FAILURE)
			return (FAILURE);
		printf("===> Assigned Buildings! <===\n");
		loadin(2);
		usleep(100000);
		map.on = 1;
		printf("Going to start running the engine!\n");
		if (run_engine(argc, &map) == FAILURE)
			return (FAILURE);
		
		return (SUCCESS);
	}
	return (error_handler("Error"));
}
