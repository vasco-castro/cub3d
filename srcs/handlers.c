/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 19:29:00 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/17 16:41:48 by vsoares-         ###   ########.fr       */
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
		debug("Player moved front!\n");
	else if (keycode == A_KEY)
		debug("Player moved left!\n");
	else if (keycode == S_KEY)
		debug("Player moved back!\n");
	else if (keycode == D_KEY)
		debug("Player moved right!\n");
	else if (keycode == LEFT_KEY)
		debug("Player looked left!\n");
	else if (keycode == RIGHT_KEY)
		debug("Player looked right!\n");
	else
		debug("Pressed key: "CYAN"%d\n"RESET, keycode);
	return (EXIT_SUCCESS);
}

/**
 * @brief Handles mouse input events.
 * @param mousecode The code of the mouse event.
 * @param x The x-coordinate of the mouse event in the window.
 * @param y The y-coordinate of the mouse event in the window.
 * @return EXIT_SUCCESS after handling the mouse event.
 */
int	mouse_handler(int mousecode, int x, int y)
{
	if (mousecode == 1)
		debug("Left Click in %d-%d\n", x, y);
	else if (mousecode == 2)
		debug("Right Click in %d-%d\n", x, y);
	else if (mousecode == 3)
		debug("Middle Click in %d-%d\n", x, y);
	else if (mousecode == 4)
		debug("Scroll UP in %d-%d\n", x, y);
	else if (mousecode == 5)
		debug("Scroll DOWN in %d-%d\n", x, y);
	else if (mousecode == 6)
		debug("Scroll right in %d-%d\n", x, y);
	else if (mousecode == 7)
		debug("Scroll left in %d-%d\n", x, y);
	else
		debug("Unkown mouse action with code: %d, in %d-%d\n",
			mousecode, x, y);
	return (EXIT_SUCCESS);
}
