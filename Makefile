NAME = monopoly_simu

CC = cc

CFLAGS = -Werror -Wextra -Wall

CFILES =	src/main.c src/player.c src/squares.c src/neighboorhood.c\
			src/map.c src/buildings.c src/monopoly.c src/taxes.c \
			src/actions.c \
			src/system.c utils/clean.c utils/error.c

OBJECTS = $(CFILES:.c=.o)

all: $(NAME)

		@echo $(Y)Compiling $(X)
		@$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJECTS)
		@$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
