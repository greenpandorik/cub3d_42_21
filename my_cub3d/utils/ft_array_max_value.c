/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_max_value.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragog <maragog@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 23:33:35 by maragog           #+#    #+#             */
/*   Updated: 2020/11/17 23:33:36 by maragog          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_array_max_value(char **arr)
{
	int res;
	int temp;
	int i;
	int j;

	i = 0;
	temp = 0;
	while (arr[i])
	{
		j = 0;
		while (arr[i][j])
			j++;
		if (j > temp)
		{
			temp = j;
			res = i;
		}
		i++;
	}
	return (res);
}
