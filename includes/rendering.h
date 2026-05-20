
#ifndef RENDERING_H
# define RENDERING_H

# include "cub3d.h"

void	render(void);

void	put_pixel(int x, int y, uint32_t color);
void	put_line(int x, int y, int size, uint32_t color);
void	put_square(int x, int y, int size, uint32_t color);
void	put_star(int x, int y, int size, uint32_t color);

#endif /* RENDERING_H */