
#include "cub3d.h"

t_game	*game(void)
{
	static t_game game;

	return (&game);
}

char	**map(void)
{
	return (game()->map);
}
