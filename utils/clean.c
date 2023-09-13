#include "../include/monopoly_simu.h"

void    clean_program(t_map *map)
{
    free(map->neighboorhoods);
    free(map->players);
    free(map->squares);
}