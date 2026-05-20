
#include "cub3d.h"

static void	render_bg(void)
{
	int	x;
	int	y;

	return ;
	debug("Rendering background...\n");
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
	debug("Rendering walls...\n");
}

static void	render_minimap(void)
{
	int	row;
	int	col;

	debug("Rendering minimap...\n");
	row = 0;
	while (row < map()->size.x && map()->map[row])
	{
		col = 0;
		while (col < map()->size.y && map()->map[row][col])
		{
			if (map()->map[row][col] == '1')
				put_square(col * MINIMAP_SCALE, row * MINIMAP_SCALE, MINIMAP_SCALE, 0x00bf5600);
			else
				put_square(col * MINIMAP_SCALE, row * MINIMAP_SCALE, MINIMAP_SCALE, 0x00fcba03);
			if (player()->coord.x == col && player()->coord.y == row)
				put_star(col * MINIMAP_SCALE, row * MINIMAP_SCALE, MINIMAP_SCALE, 0x006300bf);
			col++;
		}
		row++;
	}
}

void	render(void)
{
	render_bg();
	render_walls();
	if (MINIMAP)
		render_minimap();
}
