/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_param_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragog <maragog@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 11:24:19 by maragog           #+#    #+#             */
/*   Updated: 2020/11/18 12:00:26 by maragog          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub.h"

void		get_param_map(int fd, char *line, t_ptr *ptr)
{
	int count;

	count = 1;
	check_line_map(line, ptr);
	ptr->p->line_map = ft_strjoin(line, "$");
	while (count > 0)
	{
		if ((count = get_next_line(fd, &line)) == (-1))
			error("File doesn't read");
		check_line_map(line, ptr);
		ptr->p->line_map = ft_strjoin(ptr->p->line_map, line);
		ptr->p->line_map = ft_strjoin(ptr->p->line_map, "$");
	}
	ptr->p->split_map = ft_split(ptr->p->line_map, '$');
}
