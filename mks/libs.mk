
# LIBFT linking and compilation flags
LIBFT_DIR		:= $(LIBS_DIR)libft/
LIBFT			:= $(LIBFT_DIR)libft.a
LIBFT_FLAGS		:= -L$(LIBFT_DIR) -lft

CFLAGS			+= -I$(LIBFT_DIR) -I$(LIBFT_DIR)/$(INCS_DIR)

$(LIBFT_DIR).git:
	@git submodule update --init --quiet $(LIBFT_DIR)

$(LIBFT): $(LIBFT_DIR).git
	@printf "$(GREEN)Building LIBFT.$(RESET)\n"
	@make -sC $(LIBFT_DIR) > /dev/null 2> /dev/null

UNAME_S			:= $(shell uname -s)

# MLX Linking and Compilation Flags
ifeq ($(UNAME_S),Linux)
	MLX_DIR		:= $(LIBS_DIR)minilibx-linux/
	MLX			:= $(MLX_DIR)libmlx.a
	MLX_FLAGS	:= -L$(MLX_DIR) -lmlx -lXext -lX11
	CFLAGS		+= -I$(MLX_DIR) -I/usr/include
else ifeq ($(UNAME_S),Darwin)
	MLX_DIR		:= $(LIBS_DIR)minilibx-opengl/
	MLX			:= $(MLX_DIR)libmlx.a
	MLX_FLAGS	:= -L$(MLX_DIR) -lmlx -Wl,-ObjC -framework OpenGL -framework AppKit -framework Cocoa
	CFLAGS		+= -I$(MLX_DIR) -DGL_SILENCE_DEPRECATION -Dmlx_destroy_display\(mlx_ptr\)=\(\(void\)\(mlx_ptr\),0\)
	MLX_MAKE_VARS := CC=clang
endif
$(MLX_DIR).git:
	@git submodule update --init --quiet $(MLX_DIR)

$(MLX): $(MLX_DIR).git
	@printf "$(GREEN)Building MLX.$(RESET)\n"
	@$(MAKE) -sC $(MLX_DIR) $(MLX_MAKE_VARS) > /dev/null 2> /dev/null
