/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragog <maragog@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 11:23:18 by maragog           #+#    #+#             */
/*   Updated: 2020/11/18 11:23:19 by maragog          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub.h"

int				control_keys(int key, t_ptr *ptr)
{
	if (key == 53)
		close_win();
	else if (key == 13 || key == 1)
		forward_back_keys(ptr, key);
	else if (key == 123 || key == 124)
		rot_left_right_keys(ptr, key, 0, 0);
	else if (key == 0 || key == 2)
		left_right_keys(ptr, key);
	return (0);
}

int				play(t_ptr *ptr)
{
	run_dda(ptr);
	mlx_put_image_to_window(ptr->m->mlx_ptr, ptr->m->win_ptr,
	ptr->img[0]->img_ptr, 0, 0);
	return (0);
}

void			start_game(t_ptr *p)
{
	mlx_hook(p->m->win_ptr, 17, 1L << 0, close_win, (void *)0);
	mlx_hook(p->m->win_ptr, 2, 5, control_keys, p);
	mlx_loop_hook(p->m->mlx_ptr, play, p);
	mlx_loop(p->m->mlx_ptr);
}
