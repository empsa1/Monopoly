#include "../include/monopoly_simu.h"

int pay_taxes(t_map *map, int i, int type)
{
    printf("ENTERING PAY_TAXES\n");
    int square_index = map->players[i].player_position;
    int tax = map->squares[square_index].total_tax;
    printf("Defined everything\n");
   if (type == PROPERTY || type == STATION)
   {
    // if (map->players[i].money - tax < 0)
    //     trigger_abrupt(map, i);
    map->players[i].money -= tax;
    printf("defined lost tax\n");
    printf("%d\n", map->squares[square_index].owner_index);
    map->players[map->squares[square_index].owner_index].money += tax;
    printf("Ratio of taxes done\n");
    printf("%s paid %s %d\n", map->players[i].player_name, map->players[map->squares[square_index].owner_index].player_name, tax);
   }
   return (SUCCESS);
}