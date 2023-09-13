#include "../include/monopoly_simu.h"

int value_squares(t_map *map)
{
    map->squares[0].cost = UNITIALIZED;
    map->squares[0].mortgage = UNITIALIZED;
    map->squares[0].total_tax = UNITIALIZED;
    map->squares[0].type = SPECIAL;

    map->squares[1].cost = 60;
    map->squares[1].mortgage = 30;
    map->squares[1].total_tax = 2;
    map->squares[1].type = PROPERTY;

    map->squares[2].cost = UNITIALIZED;
    map->squares[2].mortgage = UNITIALIZED;
    map->squares[2].total_tax = UNITIALIZED;
    map->squares[2].type = SPECIAL;

    map->squares[3].cost = 60;
    map->squares[3].mortgage = 30;
    map->squares[3].total_tax = 4;
    map->squares[3].type = PROPERTY;

    map->squares[4].cost = UNITIALIZED;
    map->squares[4].mortgage = UNITIALIZED;
    map->squares[4].total_tax = 200;
    map->squares[4].type = SPECIAL;

    map->squares[5].cost = 200;
    map->squares[5].mortgage = 100;
    map->squares[5].total_tax = 25;
    map->squares[5].type = STATION;

    map->squares[6].cost = 100;
    map->squares[6].mortgage = 50;
    map->squares[6].total_tax = 6;
    map->squares[6].type = PROPERTY;

    map->squares[7].cost = UNITIALIZED;
    map->squares[7].mortgage = UNITIALIZED;
    map->squares[7].total_tax = UNITIALIZED;
    map->squares[7].type = SPECIAL;

    map->squares[8].cost = 100;
    map->squares[8].mortgage = 50;
    map->squares[8].total_tax = 6;
    map->squares[8].type = PROPERTY;
    return (value_squares2(map));
}

int value_squares2(t_map *map)
{
    map->squares[9].cost = 120;
    map->squares[9].mortgage = 60;
    map->squares[9].total_tax = 8;
    map->squares[9].type = PROPERTY;

    map->squares[10].cost = UNITIALIZED;
    map->squares[10].mortgage = UNITIALIZED;
    map->squares[10].total_tax = UNITIALIZED;
    map->squares[10].type = SPECIAL;

    map->squares[11].cost = 140;
    map->squares[11].mortgage = 70;
    map->squares[11].total_tax = 10;
    map->squares[11].type = PROPERTY;

    map->squares[12].cost = 150;
    map->squares[12].mortgage = 75;
    map->squares[12].total_tax = UNITIALIZED;
    map->squares[12].type = SPECIAL;

    map->squares[13].cost = 140;
    map->squares[13].mortgage = 70;
    map->squares[13].total_tax = 10;
    map->squares[13].type = PROPERTY;

    map->squares[14].cost = 160;
    map->squares[14].mortgage = 80;
    map->squares[14].total_tax = 12;
    map->squares[14].type = PROPERTY;

    map->squares[15].cost = 200;
    map->squares[15].mortgage = 100;
    map->squares[15].total_tax = 25;
    map->squares[15].type = STATION;

    map->squares[16].cost = 180;
    map->squares[16].mortgage = 90;
    map->squares[16].total_tax = 14;
    map->squares[16].type = PROPERTY;

    map->squares[17].cost = UNITIALIZED;
    map->squares[17].mortgage = UNITIALIZED;
    map->squares[17].total_tax = UNITIALIZED;
    map->squares[17].type = SPECIAL;

    map->squares[18].cost = 180;
    map->squares[18].mortgage = 90;
    map->squares[18].total_tax = 14;
    map->squares[18].type = PROPERTY;
    return (value_squares3(map));
}

int value_squares3(t_map *map)
{
    map->squares[19].cost = 200;
    map->squares[19].mortgage = 100;
    map->squares[19].total_tax = 16;
    map->squares[19].type = PROPERTY;

    map->squares[20].cost = UNITIALIZED;
    map->squares[20].mortgage = UNITIALIZED;
    map->squares[20].total_tax = UNITIALIZED;
    map->squares[20].type = SPECIAL;

    map->squares[21].cost = 220;
    map->squares[21].mortgage = 110;
    map->squares[21].total_tax = 18;
    map->squares[21].type = PROPERTY;

    map->squares[22].cost = UNITIALIZED;
    map->squares[22].mortgage = UNITIALIZED;
    map->squares[22].total_tax = UNITIALIZED;
    map->squares[22].type = SPECIAL;

    map->squares[23].cost = 220;
    map->squares[23].mortgage = 110;
    map->squares[23].total_tax = 18;
    map->squares[23].type = PROPERTY;

    map->squares[24].cost = 240;
    map->squares[24].mortgage = 120;
    map->squares[24].total_tax = 20;
    map->squares[24].type = PROPERTY;

    map->squares[25].cost = 200;
    map->squares[25].mortgage = 100;
    map->squares[25].total_tax = 25;
    map->squares[25].type = STATION;

    map->squares[26].cost = 260;
    map->squares[26].mortgage = 130;
    map->squares[26].total_tax = 22;
    map->squares[26].type = PROPERTY;

    return (value_squares4(map));   
}

int value_squares4(t_map *map)
{
    map->squares[27].cost = 260;
    map->squares[27].mortgage = 130;
    map->squares[27].total_tax = 22;
    map->squares[27].type = PROPERTY;

    map->squares[28].cost = 150;
    map->squares[28].mortgage = 75;
    map->squares[28].total_tax = UNITIALIZED;
    map->squares[28].type = SPECIAL;

    map->squares[29].cost = 280;
    map->squares[29].mortgage = 140;
    map->squares[29].total_tax = 24;
    map->squares[29].type = PROPERTY;

    map->squares[30].cost = UNITIALIZED;
    map->squares[30].mortgage = UNITIALIZED;
    map->squares[30].total_tax = UNITIALIZED;
    map->squares[30].type = SPECIAL;

    map->squares[31].cost = 300;
    map->squares[31].mortgage = 150;
    map->squares[31].total_tax = 26;
    map->squares[31].type = PROPERTY;

    map->squares[32].cost = 300;
    map->squares[32].mortgage = 150;
    map->squares[32].total_tax = 26;
    map->squares[32].type = PROPERTY;

    map->squares[33].cost = UNITIALIZED;
    map->squares[33].mortgage = UNITIALIZED;
    map->squares[33].total_tax = UNITIALIZED;
    map->squares[33].type = SPECIAL;

    map->squares[34].cost = 320;
    map->squares[34].mortgage = 160;
    map->squares[34].total_tax = 28;
    map->squares[34].type = PROPERTY;
    return (value_squares5(map));
}

int value_squares5(t_map *map)
{
    map->squares[35].cost = 200;
    map->squares[35].mortgage = 100;
    map->squares[35].total_tax = 25;
    map->squares[35].type = STATION;

    map->squares[36].cost = UNITIALIZED;
    map->squares[36].mortgage = UNITIALIZED;
    map->squares[36].total_tax = UNITIALIZED;
    map->squares[36].type = SPECIAL;

    map->squares[37].cost = 350;
    map->squares[37].mortgage = 175;
    map->squares[37].total_tax = 35;
    map->squares[37].type = PROPERTY;

    map->squares[38].cost = UNITIALIZED;
    map->squares[38].mortgage = UNITIALIZED;
    map->squares[38].total_tax = 100;
    map->squares[38].type = SPECIAL;

    map->squares[39].cost = 400;
    map->squares[39].mortgage = 200;
    map->squares[39].total_tax = 50;
    map->squares[39].type = PROPERTY;
    return (SUCCESS);
}


int place_squarenames(t_map *map)
{
    map->square_names = malloc(sizeof(char *) * SQUARE_NUMBER);
    map->square_names[0] = "Casa de partida";
    map->square_names[1] = "Campo Grande";
    map->square_names[2] = "Caixa de Comunidade";
    map->square_names[3] = "Rua Faria Guimarães";
    map->square_names[4] = "Imposto sobre capitais";
    map->square_names[5] = "Estação do Rossio";
    map->square_names[6] = "Alameda das linhas de Torres";
    map->square_names[7] = "Casa da Sorte";
    map->square_names[8] = "Avenida das Nações Unidas";
    map->square_names[9] = "Avenida 24Julho";
    map->square_names[10] = "Cadeia";
    map->square_names[11] = "Avenida Central";
    map->square_names[12] = "Companhia da Eletricidade";
    map->square_names[13] = "Rua Ferreira Borges";
    map->square_names[14] = "Avenida de Roma";
    map->square_names[15] = "Estação do Oriente";
    map->square_names[16] = "Avenida da Boavista";
    map->square_names[17] = "Caixa da Comunidade";
    map->square_names[18] = "Avenida da Republica";
    map->square_names[19] = "Rua Mouzinho da Silveira";
    map->square_names[20] = "Estacionamento Livre";
    map->square_names[21] = "Rua de Santa Catarina";
    map->square_names[22] = "Casa da Sorte";
    map->square_names[23] = "Avenida Infante Santo";
    map->square_names[24] = "Rua Júlio Dinis";
    map->square_names[25] = "Estação de São Bento";
    return (place_squarenames2(map));
}

int place_squarenames2(t_map *map)
{
    map->square_names[26] = "Praça da República";
    map->square_names[27] = "Avenida Fontes Pereira de Melo";
    map->square_names[28] = "Companhia das Águas";
    map->square_names[29] = "Rotunda da Boavista";
    map->square_names[30] = "Vá para a cadeia";
    map->square_names[31] = "Avenida da Liberdade";
    map->square_names[32] = "Rua dos Clérigos";
    map->square_names[33] = "Caixa da Comunidade";
    map->square_names[34] = "Avenida Parque das Nações";
    map->square_names[35] = "Estação de Santa Apolónia";
    map->square_names[36] = "Casa da Sorte";
    map->square_names[37] = "Rua das Amoreiras";
    map->square_names[38] = "Imposto de Luxo";
    map->square_names[39] = "Rossio";
    return (SUCCESS);
}

int init_squares(t_map *map)
{
    int i;

    i = 0;
    place_squarenames(map);
    value_squares(map);
    while (i < SQUARE_NUMBER)
    {
        map->squares[i].index = i;
        map->squares[i].owner_index = UNDEFINED;
        map->squares[i].name = map->square_names[i];
        i++;
    }
    return (TRUE);
}
