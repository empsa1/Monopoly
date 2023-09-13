#include "../include/monopoly_simu.h"

int init_map(t_map *map, int argc)
{
    map->players = malloc(sizeof(t_player) * argc);
    map->squares = malloc(sizeof(t_square) * SQUARE_NUMBER);
    map->neighboorhoods = malloc(sizeof(t_neighboorhood) * NEIGHBOORHOOD_NUMBER);
    return (SUCCESS);
}