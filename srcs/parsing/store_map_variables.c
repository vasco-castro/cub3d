/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_map_variables.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 19:49:15 by biphuyal          #+#    #+#             */
/*   Updated: 2026/05/19 20:54:21 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

bool	store_north_texture(char **raw_map, char **north)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (raw_map[i])
	{
		if (raw_map[i][j] != 'N')
			j++;
		if (raw_map[i][j] == 'N' && raw_map[i][j + 1] == 'O'
			&& raw_map[i][j + 2] == ' ')
		{
			j += 2;
			while (raw_map[i][j] == ' ')
				j++;
			if (raw_map[i][j])
				*north = ft_strdup(raw_map[i]);
			return (true);
		}
	}
	return (false);
}

t_map_vars	store_map_variables(char **raw_map, bool *good)
{
	t_map_vars	map_vars;

	map_vars = (t_map_vars){0};
	if (!store_north_texture(raw_map, &map_vars.north_texture_path))
		return(*good = false, map_vars);
	return ((t_map_vars){
		map_vars.north_texture_path,
		NULL,
		NULL,
		NULL,
		0,
		0,
	});
}
