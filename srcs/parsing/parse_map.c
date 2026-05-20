
#include "cub3d.h"

void	parse_map(const char *filename)
{
	debug("Parsing map from file: %s\n", filename);
	map()->n_texture = "textures/Grass.xpm";
	map()->w_texture = "textures/Hills.xpm";
	map()->s_texture = "textures/Water.xpm";
	map()->e_texture = "textures/Tilled_Dirt.xpm";
	map()->ceiling = 0x0074e3fc;
	map()->floor = 0x004a4a4a;
	map()->map = ft_tabcpy((char *[]){
		(char *){"11111111"},
		(char *){"10000001"},
		(char *){"10100001"},
		(char *){"10110001"},
		(char *){"10010001"},
		(char *){"11110001"},
		(char *){"10000001"},
		(char *){"11111111"},
		NULL
	});
	map()->size = (t_point){8, 8};
	player()->coord = (t_point){3, 2};
	player()->angle = (t_point){0, 0};
}
