NAME = cub3D
FLAGS = -Wall -Werror -Wextra -L ./minilibx_opengl_20191021/ -lmlx -framework OpenGL -framework AppKit
HDRS = ./cub.h
SRC = ./cub.c ./engine/error.c
SRC_UTILS = ./utils/ft_array_max_value.c ./utils/ft_size_array.c ./utils/ft_strcmp.c ./utils/ft_atoi.c ./utils/ft_putstr_fd.c ./utils/ft_strjoin.c ./utils/ft_strlen.c ./utils/get_next_line.c ./utils/ft_strlcpy.c ./utils/ft_split.c ./utils/ft_bzero.c ./utils/ft_strtrim.c
SRC_CHECK = ./engine/check/check_sprite.c ./engine/check/check_filename.c ./engine/check/init_check_struct.c ./engine/check/check_line_map.c ./engine/check/check_param_objects.c ./engine/check/match_to_match.c
SRC_GET = ./engine/get_param_objects/transform_map.c ./engine/get_param_objects/get_sprite.c ./engine/get_param_objects/get_param_map.c ./engine/get_param_objects/get_param_objects.c ./engine/get_param_objects/init_param_objects.c ./engine/get_param_objects/sort_param_objects.c
SRC_GAME = ./engine/game/game.c ./engine/game/init_game_struct.c ./engine/game/game_control_keys.c ./engine/game/bitmap.c
SRC_DDA = ./engine/DDA/init_dda_struct.c ./engine/DDA/run_dda.c ./engine/DDA/run_draw.c ./engine/DDA/draw_sprite.c
OBJ = $(SRC:.c=.o) $(SRC_UTILS:.c=.o) $(SRC_CHECK:.c=.o) $(SRC_GET:.c=.o) $(SRC_GAME:.c=.o) $(SRC_DDA:.c=.o)

%.o:%.c
	@gcc -o $@ -c $<
	@echo "\033[90m[\033[32mOK\033[90m]\033[33m Compiling $<\033[0m"

$(NAME): $(OBJ) $(HDRS)
	@cd minilibx_opengl_20191021 && make 
	@gcc -o $(NAME) $(OBJ) $(FLAGS)
	@echo "\033[90m[\033[32mSuccess\033[90m]\033[32m Successfully compiled cub3D project.\033[0m"

all: $(NAME)

clean:
	@/bin/rm -f $(OBJ)
	@echo "\033[90m[\033[91mDeleting\033[90m]\033[31m Object files deleted\033[0m"

fclean: clean
	@cd minilibx_opengl_20191021 && make clean
	@/bin/rm -f cub3D.bmp cub3D
	@echo "\033[90m[\033[91mDeleting\033[90m]\033[31m cub3D.bmp deleted.\033[0m"
	@echo "\033[90m[\033[91mDeleting\033[90m]\033[31m cub3D deleted.\033[0m"

re: fclean all

.PHONY: all clean fclean re