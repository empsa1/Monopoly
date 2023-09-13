#include "../include/monopoly_simu.h"

int init_player(char **argv, t_map *map)
{
    int i;
    int j;

    i = 2;
    j = 0;
    while (argv[i]  != NULL)
    {
        map->players[j].index = i;
        map->players[j].bankrupcy = 0;
        map->players[j].money = 1500;
        map->players[j].player_position = 0;
        map->players[j].player_name = argv[i++];
        map->players[j++].squares_owned = NULL;
    }
    return (SUCCESS);
}