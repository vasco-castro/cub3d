
#include "libs/libft/libft.h"

void	clean_exit(void)
{
	// free_map();
	// free_textures();
	// free_sprites();
	// free_player();
}

void	parse_map(const char *filename)
{
	debug("Parsing map from file: %s\n", filename);
	// open the file
	// read the file line by line
	// parse the map data
	// store the map data in a suitable data structure
}

void	load_map(void)
{
	// load textures
	// load sprites
	// initialize player position and direction
}

int	main(int argc, char *argv[])
{
	parse_debug_mode(&argc, argv);
	if (argc != 2)
	{
		ft_dprintf(STDERR_FILENO, "Usage: %s <filename>\n", argv[0]);
		ft_dprintf(STDERR_FILENO, RED "Error\n%s" RESET,
			"Invalid number of arguments. Expected 1 argument for the map file.\n");
		return (clean_exit(), 1);
	}

	parse_map(argv[1]);
	load_map();

	return (clean_exit(), 0);
}
