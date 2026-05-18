/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 19:29:00 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/18 21:23:56 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/**
 * @brief Closes the game window and frees resources.
 * @return EXIT_SUCCESS on successful exit.
 */
int	close_window(void)
{
	destroy_cub3d(EXIT_SUCCESS);
	return (EXIT_SUCCESS);
}

/**
 * @brief Handles keyboard input events.
 * @param keycode The code of the key pressed.
 * @return EXIT_SUCCESS after handling the key event.
 */
int	key_handler(int keycode)
{
	if (keycode == ESCAPE_KEY || keycode == CLOSE_KEY)
		return (close_window());
	else if (keycode == W_KEY)
		debug(CYAN "Player moved front!\n" RESET);
	else if (keycode == A_KEY)
		debug(CYAN "Player moved left!\n" RESET);
	else if (keycode == S_KEY)
		debug(CYAN "Player moved back!\n" RESET);
	else if (keycode == D_KEY)
		debug(CYAN "Player moved right!\n" RESET);
	else if (keycode == LEFT_KEY)
		debug(CYAN "Player looked left!\n" RESET);
	else if (keycode == RIGHT_KEY)
		debug(CYAN "Player looked right!\n" RESET);
	else
		debug("Pressed key: %d\n", keycode);
	return (EXIT_SUCCESS);
}

/**
 * @brief Handles mouse input events.
 * @param mousecode The code of the mouse event.
 * @param x The x-coordinate of the mouse event in the window.
 * @param y The y-coordinate of the mouse event in the window.
 * @return EXIT_SUCCESS after handling the mouse event.
 */
int	mouse_click_handler(int mousecode, int x, int y)
{
	if (mousecode == 1)
		debug(PURPLE "Left Click in %d-%d\n" RESET, x, y);
	else if (mousecode == 2)
		debug(PURPLE "Middle Click in %d-%d\n" RESET, x, y);
	else if (mousecode == 3)
		debug(PURPLE "Right Click in %d-%d\n" RESET, x, y);
	else if (mousecode == 4)
		debug(PURPLE "Scroll UP in %d-%d\n" RESET, x, y);
	else if (mousecode == 5)
		debug(PURPLE "Scroll DOWN in %d-%d\n" RESET, x, y);
	else if (mousecode == 6)
		debug(PURPLE "Scroll right in %d-%d\n" RESET, x, y);
	else if (mousecode == 7)
		debug(PURPLE "Scroll left in %d-%d\n" RESET, x, y);
	else
		debug("Unkown mouse action with code: %d, in %d-%d\n",
			mousecode, x, y);
	return (EXIT_SUCCESS);
}

int	mouse_move_handler(int x, int y)
{
	debug(YELLOW "Mouse moved to: %d-%d\n" RESET, x, y);
	mlx_pixel_put(game()->mlx, game()->win, x-3, y, 0x006c11f5);

	mlx_pixel_put(game()->mlx, game()->win, x-2, y-1, 0x006c11f5);
	mlx_pixel_put(game()->mlx, game()->win, x-2, y, 0x006c11f5);
	mlx_pixel_put(game()->mlx, game()->win, x-2, y+1, 0x006c11f5);

	mlx_pixel_put(game()->mlx, game()->win, x-1, y-2, 0x006c11f5);
	mlx_pixel_put(game()->mlx, game()->win, x-1, y-1, 0x006c11f5);
	mlx_pixel_put(game()->mlx, game()->win, x-1, y, 0x006c11f5);
	mlx_pixel_put(game()->mlx, game()->win, x-1, y+1, 0x006c11f5);
	mlx_pixel_put(game()->mlx, game()->win, x-1, y+2, 0x006c11f5);

	mlx_pixel_put(game()->mlx, game()->win, x, y-3, 0x006c11f5);
	mlx_pixel_put(game()->mlx, game()->win, x, y-2, 0x006c11f5);
	mlx_pixel_put(game()->mlx, game()->win, x, y-1, 0x006c11f5);
	mlx_pixel_put(game()->mlx, game()->win, x, y, 0x00aa00aa);
	mlx_pixel_put(game()->mlx, game()->win, x, y+1, 0x006c11f5);
	mlx_pixel_put(game()->mlx, game()->win, x, y+2, 0x006c11f5);
	mlx_pixel_put(game()->mlx, game()->win, x, y+3, 0x006c11f5);

	mlx_pixel_put(game()->mlx, game()->win, x+1, y-2, 0x006c11f5);
	mlx_pixel_put(game()->mlx, game()->win, x+1, y-1, 0x006c11f5);
	mlx_pixel_put(game()->mlx, game()->win, x+1, y, 0x006c11f5);
	mlx_pixel_put(game()->mlx, game()->win, x+1, y+1, 0x006c11f5);
	mlx_pixel_put(game()->mlx, game()->win, x+1, y+2, 0x006c11f5);

	mlx_pixel_put(game()->mlx, game()->win, x+2, y-1, 0x006c11f5);
	mlx_pixel_put(game()->mlx, game()->win, x+2, y, 0x006c11f5);
	mlx_pixel_put(game()->mlx, game()->win, x+2, y+1, 0x006c11f5);

	mlx_pixel_put(game()->mlx, game()->win, x+3, y, 0x006c11f5);
	return (EXIT_SUCCESS);
}

int	loop_hook(void)
{
	render();
	return (EXIT_SUCCESS);
}
