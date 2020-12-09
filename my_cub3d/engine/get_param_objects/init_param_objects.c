/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_param_objects.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragog <maragog@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 11:24:42 by maragog           #+#    #+#             */
/*   Updated: 2020/11/18 12:03:19 by maragog          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub.h"

void		init_param_objects(t_ptr *ptr)
{
	if (!(ptr->p = (t_paramobj *)malloc(sizeof(t_paramobj))))
		error("struct param doesn't allocate in memory");
}
