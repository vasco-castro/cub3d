
#ifndef HANDLERS_H
# define HANDLERS_H

# define CLOSE_KEY 17

# ifdef __APPLE__
#  define ESCAPE_KEY 53

#  define UP_KEY 126
#  define DOWN_KEY 125
#  define LEFT_KEY 123
#  define RIGHT_KEY 124

#  define W_KEY 13
#  define S_KEY 1
#  define A_KEY 0
#  define D_KEY 2
# else
#  define ESCAPE_KEY 65307

#  define UP_KEY 65362
#  define DOWN_KEY 65364
#  define LEFT_KEY 65361
#  define RIGHT_KEY 65363

#  define W_KEY 119
#  define S_KEY 115
#  define A_KEY 97
#  define D_KEY 100
# endif

enum
{
	ON_KEYDOWN = 2,
	ON_KEYUP = 3,
	ON_MOUSEDOWN = 4,
	ON_MOUSEUP = 5,
	ON_MOUSEMOVE = 6,
	ON_EXPOSE = 12,
	ON_DESTROY = 17
};

int	close_window(void);
int	key_handler(int keycode);
int	mouse_click_handler(int mousecode, int x, int y);
int	mouse_move_handler(int x, int y);
int	loop_hook(void);

#endif /* HANDLERS_H */
