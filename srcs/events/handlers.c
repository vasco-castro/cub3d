/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 19:29:00 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/19 21:33:28 by vsoares-         ###   ########.fr       */
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

int	loop_hook(void)
{
	render();
	return (EXIT_SUCCESS);
}
