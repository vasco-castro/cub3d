
#include "cub3d.h"

static void	render_bg(void)
{
	size_t x, y;

	return ;
	y = 0;
	while (W_HEIGHT / 2 >= y++)
	{
		x = 0;
		while (W_WIDTH >= x++)
			mlx_pixel_put(game()->mlx, game()->win, x, y, map()->ceiling);
	}
	while (W_HEIGHT >= y++)
	{
		x = 0;
		while (W_WIDTH >= x++)
			mlx_pixel_put(game()->mlx, game()->win, x, y, map()->floor);
	}
}

static void	render_walls(void)
{

}

static void	render_minimap(void)
{
	int	x;
	int	y;
	// mlx_pixel_put(game()->mlx, game()->win, 0, 0, 0x00cc0000);
	// mlx_pixel_put(game()->mlx, game()->win, 1, 0, 0x00cc0000);
	// mlx_pixel_put(game()->mlx, game()->win, 0, 1, 0x00cc0000);
	// mlx_pixel_put(game()->mlx, game()->win, 1, 1, 0x00cc0000);

	x = 0;
	while (x < map()->size.x || map()->map[x])
	{
		y = 0;
		while (y < map()->size.y || map()->map[x][y])
		{
			if (map()->map[x][y] == '1')
				mlx_pixel_put(game()->mlx, game()->win, x, y, 0x00cc0000);
			else if (map()->map[x][y] == '0')
				mlx_pixel_put(game()->mlx, game()->win, x, y, 0x0000cc00);
			y++;
		}
		x++;
	}
}

void	render(void)
{
	render_bg();
	render_walls();
	render_minimap();
}