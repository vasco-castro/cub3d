
#include "cub3d.h"

t_game	*game()
{
	static t_game game;

	return (&game);
}

char **map()
{
	return (game()->map);
}
