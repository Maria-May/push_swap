/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:23:16 by mdaryn            #+#    #+#             */
/*   Updated: 2022/03/03 15:23:18 by mdaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_arr(t_data *data)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < data->size - 1)
	{
		j = data->size - 1;
		while (j > i)
		{
			if (data->sort_array[j - 1] > data->sort_array[j])
			{
				tmp = data->sort_array[j - 1];
				data->sort_array[j - 1] = data->sort_array[j];
				data->sort_array[j] = tmp;
			}
			j--;
		}
		i++;
	}
}
