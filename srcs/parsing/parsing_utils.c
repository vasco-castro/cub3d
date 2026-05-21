/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 16:38:41 by biphuyal          #+#    #+#             */
/*   Updated: 2026/05/20 16:38:53 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

bool is_space(char c)
{
	return (c == ' ' || c == '\t');
}
void	skip_spaces(char *line, size_t *j)
{
	while (line[*j] && is_space(line[*j]))
		(*j)++;
}
bool	is_map_line(char *line, size_t j)
{
	return (line[j] == '0' || line[j] == '1');
}
