
#include "cub3d.h"

t_game	*game()
{
	static t_game game;

	return (&game);
}

t_map	*map()
{
	static t_map map;

	return (&map);
}
