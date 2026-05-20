
#ifndef CUB3D_H
# define CUB3D_H

# include "libft.h"
# include "mlx.h"

# include "handlers.h"
# include "rendering.h"

# define FOV 1.047
# define W_WIDTH 720
# define W_HEIGHT 480
# define MINIMAP true
# define MINIMAP_SCALE 24
# define W_MSG "Let's get cub3D!"

typedef struct s_game
{
	void		*mlx;
	void		*win;
}	t_game;

typedef struct s_map
{
	char		*n_texture;
	char		*w_texture;
	char		*s_texture;
	char		*e_texture;

	uint32_t	ceiling;
	uint32_t	floor;

	char		**map;

	t_point		size;
}	t_map;

typedef struct s_player
{
	t_point	coord;
	t_point	angle;
}	t_player;

t_game		*game(void);
t_map		*map(void);
t_player	*player(void);

void		parse_map(const char *filename);
void		destroy_cub3d(int status);

#endif /* CUB3D_H */
