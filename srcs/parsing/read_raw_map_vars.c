/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_map_variables.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:37:07 by biphuyal          #+#    #+#             */
/*   Updated: 2026/05/19 16:39:28 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

t_map_vars	store_map_variables(char **raw_map)
{
	(void)raw_map;
	return ((t_map_vars){
		NULL,
		NULL,
		NULL,
		NULL,
		0,
		0,
		NULL
	});
}
