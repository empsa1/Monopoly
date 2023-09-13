#include "../include/monopoly_simu.h"

/*int can_house(t_map *map, int i) //COMPLETED
{
    if (map->squares[i].buildings.houses == 4 \
    && map->squares[i].buildings.hotel == 0)
        return -1;
    else if (map->squares[i].buildings.houses < 4)
        return (4 - map->squares[i].buildings.houses);
    return (FALSE);
}

int owns_neigh(t_map *map, int i) //COMPLETED
{
    int j;
    int flag;

    j = 0;
    flag = 0;
    while (j < map->nr_neigh)
        if (map->neighboorhoods[].squares)
            flag++;
    if (flag == map->nr_neigh)
        return (TRUE);
    return (FALSE);
}

int special_dice(int result)
{
    return (result);
}
*/

int roll_dice()
{
    int result;

    result = (rand() % 6 + 1) + (rand() % 6 + 1);
    return (result);
}