
#include "cub3d.h"

void	destroy_cub3d(int status)
{
	if (game())
	{
		// clean_textures();
		if (game()->win)
			mlx_destroy_window(game()->mlx, game()->win);
		if (game()->mlx)
		{
			mlx_destroy_display(game()->mlx);
			free(game()->mlx);
		}
		// free_map();
		if (game()->map)
			ft_tabfree(game()->map);
	}
	// free_textures();
	// free_sprites();
	// free_player();
	exit(status);
}

static void	game_init(void)
{
	game()->mlx = mlx_init();
	game()->win = mlx_new_window(game()->mlx, W_WIDTH, W_HEIGHT, W_MSG);
	// load textures
	// load sprites
	// initialize player position and direction
	mlx_hook(game()->win, 4, 0, mouse_handler, &game);
	mlx_hook(game()->win, 2, 1, key_handler, &game);
	mlx_hook(game()->win, 17, 1, close_window, &game);
	mlx_loop(game()->mlx);
}

int	main(int argc, char *argv[])
{
	parse_debug_mode(&argc, argv);
	if (argc != 2)
	{
		ft_dprintf(STDERR_FILENO, "Usage: %s <filename>\n", argv[0]);
		ft_dprintf(STDERR_FILENO, RED "Error\n%s" RESET,
			"Invalid number of arguments. Expected 1 argument for the map file.\n");
		return (1);
	}

	if (ft_has_extension(argv[1], ".cub"))
	{
		ft_dprintf(STDERR_FILENO, RED "Error\n%s" RESET,
			"Invalid file. Expected a .cub file.\n");
		return (1);
	}

	parse_map(argv[1]);
	game_init();

	return (destroy_cub3d(EXIT_SUCCESS), EXIT_SUCCESS);
}
