#include "../include/monopoly_simu.h"

int init_neigh(t_map *map)
{
    int i;

    i = 0;
    map->neighboorhoods[0].n_squares = 2;
    map->neighboorhoods[1].n_squares = 3;
    map->neighboorhoods[2].n_squares = 3;
    map->neighboorhoods[3].n_squares = 3;
    map->neighboorhoods[4].n_squares = 3;
    map->neighboorhoods[5].n_squares = 3;
    map->neighboorhoods[6].n_squares = 3;
    map->neighboorhoods[7].n_squares = 2;
    while (i < NEIGHBOORHOOD_NUMBER)
    {
        map->neighboorhoods[i].squares = malloc(sizeof(t_square) * map->neighboorhoods[i].n_squares);
        map->neighboorhoods[i].index = i;
        i++;
    }
    map->neighboorhoods[0].color = N_BROWN;
    map->neighboorhoods[0].squares[0] = map->squares[1];
    map->neighboorhoods[0].squares[1] = map->squares[3];
    map->neighboorhoods[1].color = N_LIGHT_BLUE;
    map->neighboorhoods[1].squares[0] = map->squares[6];
    map->neighboorhoods[1].squares[1] = map->squares[8];
    map->neighboorhoods[1].squares[2] = map->squares[9];
    map->neighboorhoods[2].color = N_PINK;
    map->neighboorhoods[2].squares[0] = map->squares[11];
    map->neighboorhoods[2].squares[1] = map->squares[13];
    map->neighboorhoods[2].squares[2] = map->squares[14];
    map->neighboorhoods[3].color = N_ORANGE;
    map->neighboorhoods[3].squares[0] = map->squares[16];
    map->neighboorhoods[3].squares[1] = map->squares[18];
    map->neighboorhoods[3].squares[2] = map->squares[19];
    map->neighboorhoods[4].color = N_RED;
    map->neighboorhoods[4].squares[0] = map->squares[21];
    map->neighboorhoods[4].squares[1] = map->squares[23];
    map->neighboorhoods[4].squares[2] = map->squares[24];
    map->neighboorhoods[5].color = N_YELLOW;
    map->neighboorhoods[5].squares[0] = map->squares[26];
    map->neighboorhoods[5].squares[1] = map->squares[27];
    map->neighboorhoods[5].squares[2] = map->squares[29];
    map->neighboorhoods[6].color = N_GREEN;
    map->neighboorhoods[6].squares[0] = map->squares[31];
    map->neighboorhoods[6].squares[1] = map->squares[32];
    map->neighboorhoods[6].squares[2] = map->squares[34];
    map->neighboorhoods[7].color = N_DARK_BUE;
    map->neighboorhoods[7].squares[0] = map->squares[37];
    map->neighboorhoods[7].squares[1] = map->squares[39];
    return (SUCCESS);
}