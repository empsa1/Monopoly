#ifndef MONOPOLY_SIMULATION_H
# define MONOPOLY_SIMULATION_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

# define FAILURE				-541345
# define TRUE					0
# define FALSE					-542123
# define SUCCESS 				0
# define SQUARE_NUMBER			40
# define NEIGHBOORHOOD_NUMBER	8
# define UNITIALIZED			-12352
# define SPECIAL_DICE			0

# define UNDEFINED				-2312
# define OTHER					31431
# define HIM					1212
# define N_BROWN				0
# define N_LIGHT_BLUE			1
# define N_PINK					2
# define N_ORANGE				3
# define N_RED					4
# define N_YELLOW				5
# define N_GREEN				6
# define N_DARK_BUE				7
# define PROPERTY				0
# define STATION				1
# define COMPANY				2
# define SPECIAL				3

typedef struct	s_building
{
	int				cost;
	int				houses;
	int				hotel;
	char			*name;
	int				type;
	int				mortgage;
	int				tax;
}					t_building;

typedef struct	s_square
{
	int				index;				//Init
	int				cost;				//Init
	char			*name;				//Init
	t_building		buildings;
	int				total_tax;			//Init
	int				mortgage;			//Init
	int				type;				//Init
	int				owner_index;		//Init
}					t_square;

typedef struct	s_neighboorhood
{
	int				index;				//Init
	int				n_squares;			//Init
	int				color;				//Init
	t_square		*squares;			//Init
}					t_neighboorhood;

typedef struct	s_player
{
	int				index;				//Init
	char			*player_name;		//Init
	int				bankrupcy;			//Init
	int				money;				//Init
	int				player_position;	//Init
	t_square		*squares_owned;		//Init
} 					t_player;

typedef struct	s_map
{
	t_player			*players;
	t_square			*squares;
	t_neighboorhood		*neighboorhoods;
	char				**square_names;
	int					nr_neigh;
	int					on;
	int					n_players;
}						t_map;

//src/map.c
int init_map(t_map *map, int argc);

//src/player.c
int init_player(char **argv, t_map *map);

//src/buildings.c
int init_buildings(t_map *map);

//src/squares.c
int init_squares(t_map *map);
int value_squares(t_map *map);
int value_squares2(t_map *map);
int value_squares3(t_map *map);
int value_squares4(t_map *map);
int value_squares5(t_map *map);
int place_squarenames(t_map *map);
int place_squarenames2(t_map *map);

//src/taxes.c
int pay_taxes(t_map *map, int i, int type);

//src/neighboorhood.c
int init_neigh(t_map *map);

//src/actions.c
int action(t_map *map, int i);

//src/monopoly.c
int run_engine(int argc, t_map *map);

//src/main.c
int	loadin(int c);
void	clear();

//utils/error.c
int error_handler(char *error_msg);

//src/system.c
int roll_dice();

#endif 
