#include "../include/monopoly_simu.h"

void    print_square(t_square square)
{
    printf("\nSquare Info\n");
    printf("Name: %s\n", square.name);
    printf("Total Fee: %d\n",square.total_tax);
    printf("Type of Square: %d\n", square.type);
}

int action1(t_map *map, int i)
{
    printf("ENTERING ACTION1\n");
    int square_index = map->players[i].player_position;
    int answer;
    if (map->players[i].money - map->squares[square_index].cost > 0 \
    && map->squares[square_index].type != SPECIAL)
    {
        printf("This land is not owned!\n");
        usleep(10);
        print_square(map->squares[square_index]);
        usleep(10);
        printf("Do you want to buy %s?\n1.Yes\n2.No\n", map->squares[map->players[i].player_position].name);
        scanf("%d", &answer);
        if (answer == 1)
        {
            map->squares[square_index].owner_index = i;
            printf("Congratulations! %s has bought %s!!!\n", map->players[i].player_name, map->squares[square_index].name);
            return (SUCCESS);
        }
        else if (answer == 2)
            return (SUCCESS);
        else
        {
            // clear();
            // action1(map, i);
            return (SUCCESS);
        }
    }
    return (SUCCESS);
}

int action2(t_map *map, int i)
{
    printf("ENTERING action2\n");
    pay_taxes(map, i, STATION);
    return (SUCCESS);
}

// int action3(t_map *map, int i)
// {
//     printf("You are in: %s  %d\n\n", map->squares[map->players[i].player_position].name, i);
//     //run_special(&map, i);
//     return (SUCCESS);
// }

// int action4(t_map *map, int i)
// {
//     printf("You are in: %s\n\n", map->squares[map->players[i].player_position].name);
//     pay_taxes(map, i, PROPERTY);
//     return (SUCCESS);
// }

// int action5(t_map *map, int i)
// {
//     printf("You are in: %s\n\n", map->squares[map->players[i].player_position].name);
//     pay_taxes(map, i, STATION);
//     return (SUCCESS);
// }

int action(t_map *map, int i)
{
    printf("ENTERING ACTION\n");
    int square_index = map->players[i].player_position;
    if (map->squares[square_index].owner_index == UNDEFINED && \
    (map->squares[square_index].type == PROPERTY || \
    map->squares[square_index].type == STATION))
    {
        printf("cond1\n");
        action1(map, i);
    }
    else if (map->squares[square_index].type == PROPERTY \
    && map->squares[square_index].owner_index != map->players[i].index && \
    map->squares[square_index].owner_index != UNDEFINED)
    {
        printf("cond2\n");
           action2(map, i);
    }
    else if (map->squares[map->players[i].player_position].type == STATION \
    && map->squares[i].owner_index == map->players[i].index)
    { 
        printf("cond3\n");
        action1(map, i);
    }
    else if (map->squares[map->players[i].player_position].type == STATION \
    && map->squares[i].owner_index != UNDEFINED)
    {
        printf("cond4\n");
        action2(map, i);
    }
    // else if(map->squares[map->players[i].player_position].type == SPECIAL)
    //     action3(map, i);
    return (SUCCESS);
}