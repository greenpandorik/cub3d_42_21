/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_check_struct.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragog <maragog@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 23:40:26 by maragog           #+#    #+#             */
/*   Updated: 2020/11/17 23:40:27 by maragog          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub.h"

void			init_check_struct(t_ptr *ptr)
{
	if (!(ptr->c = (t_check *)malloc(sizeof(t_check))))
		error("struct check doesn't allocate in memory (*_*)");
	ptr->c->r = 0;
	ptr->c->no = 0;
	ptr->c->so = 0;
	ptr->c->we = 0;
	ptr->c->ea = 0;
	ptr->c->s = 0;
	ptr->c->f = 0;
	ptr->c->c = 0;
	ptr->c->map = 0;
	ptr->c->pos_player = 0;
}
