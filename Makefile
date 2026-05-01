
NAME = cub3D

CC = cc -Wall -Wextra -Werror

# Directories
SRCS_DIR = ./srcs
INCLUDES_DIR = ./includes
LIBS_DIR = ./libs

#Libraries and it's directories
MLX_DIR	= $(LIBS_DIR)/minilibx
MLX = $(MLX_DIR)/libmlx.a
MLX_FLAGS = -L. -lXext -L. -lX11

LIBFT_DIR = $(LIBS_DIR)/libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_FLAGS = -L$(LIBFT_DIR)/inc

# Source files (with directories applied)
SRCS = $(addsuffix .c, $(addprefix $(SRCS_DIR)/, main ))

# Object files convertion
OBJS := $(SRCS:%.c=%.o)

# MAKEFILE RULES
all: $(NAME)

$(NAME): $(MLX) $(LIBFT) $(OBJS)
	@echo "$(GREEN)Building $(NAME).$(RESET)"
	@$(CC) $(OBJS) $(LIBFT) $(LIBFT_FLAGS) $(MLX) $(MLX_FLAGS) -o $(NAME)

$(LIBFT):
	@echo "$(GREEN)Building LIBFT.$(RESET)"
	@make -s -C $(LIBFT_DIR)

$(MLX):
	@echo "$(GREEN)Building MLX.$(RESET)"
	@make -s -C $(MLX_DIR)

clean:
	@echo "$(YELLOW)Cleaning objects.$(RESET)"
	@rm -f $(OBJS)

fclean: clean
	@echo "$(YELLOW)Cleaning binaries.$(RESET)"
	@rm -f $(NAME)
	@make clean -s -C $(MLX_DIR)
	@make fclean -s -C $(LIBFT_DIR)

re: fclean all

.DEFAULT_GOAL := all
.PHONY: all clean fclean re t

BLACK	= \e[1;30m
RED		= \e[1;31m
GREEN	= \e[92m
YELLOW	= \e[1;33m
BLUE	= \e[1;34m
PURPLE	= \e[1;35m
CYAN	= \e[1;36m
WHITE	= \e[1;37m
RESET	= \e[0m
