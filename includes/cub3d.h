
#ifndef CUB3D_H
# define CUB3D_H

# include "libft.h"
# include "mlx.h"

# include "handlers.h"

# define FOV 1.047
# define W_WIDTH 1280
# define W_HEIGHT 720
# define W_MSG "Let's get cub3D!"

# define N_TEXTURE 0
# define S_TEXTURE 1
# define W_TEXTURE 2
# define E_TEXTURE 3

typedef struct s_game
{
	char		*textures[4];

	uint32_t	ceiling;
	uint32_t	floor;

	char		**map;

	void		*mlx;
	void		*win;
}	t_game;

t_game	*game(void);
char	**map(void);

// void	load_map(void);
void	parse_map(const char *filename);
void	render(void);
void	destroy_cub3d(int status);

#endif /* CUB3D_H */
