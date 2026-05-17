
#include "cub3d.h"

void	parse_map(const char *filename)
{
	debug("Parsing map from file: %s\n", filename);
	game()->textures[N_TEXTURE] = "textures/Grass.xpm";
	game()->textures[S_TEXTURE] = "textures/Hills.xpm";
	game()->textures[W_TEXTURE] = "textures/Water.xpm";
	game()->textures[E_TEXTURE] = "textures/Tilled_Dirt.xpm";
	game()->ceiling = 0x00ff00ff;
	game()->floor = 0xff00ff00;
	// open the file
	// read the file line by line
	// parse the textures
	// parse the colors of the ceiling and the floor
	// parse the map data
	// store the map data in a suitable data structure
}
