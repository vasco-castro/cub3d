
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

	map()->map = ft_calloc(7, sizeof(char *));
	map()->size = (t_point){ 6, 6 };
	map()->map = ft_tabcpy((char*[]){
		(char *){"111111"},
		(char *){"100001"},
		(char *){"100001"},
		(char *){"100001"},
		(char *){"100001"},
		(char *){"111111"},
		NULL
	});
	// open the file
	// read the file line by line
	// parse the textures
	// parse the colors of the ceiling and the floor
	// parse the map data
	// store the map data in a suitable data structure
}
