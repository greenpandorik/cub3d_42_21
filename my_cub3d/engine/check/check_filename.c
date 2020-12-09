/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_filename.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragog <maragog@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 23:40:13 by maragog           #+#    #+#             */
/*   Updated: 2020/11/17 23:40:14 by maragog          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub.h"

int		check_filename(char *filename)
{
	int size;

	size = ft_strlen(filename);
	if (filename[size - 1] == 'b' && filename[size - 2] == 'u' &&
	filename[size - 3] == 'c' && filename[size - 4] == '.')
		return (1);
	return (0);
}
