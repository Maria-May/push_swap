/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:23:56 by mdaryn            #+#    #+#             */
/*   Updated: 2022/03/03 15:23:58 by mdaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_doubles(int *arr, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (arr[i] == arr[index])
			return (0);
		i++;
	}
	return (1);
}

void	ft_fill_a_stack(char **argv, t_data *data)
{
	int	i;

	i = 0;
	while (i < data->size)
	{
		data->a_stack.stack[i].num = ft_atoi(argv[i + 1]);
		data->sort_array[i] = data->a_stack.stack[i].num;
		if (!ft_check_doubles(data->sort_array, i))
		{
			write(2, "Error\n", 6);
			exit(0);
		}
		i++;
	}
}

int	ft_find_index(int num, int *arr)
{
	int	i;

	i = 0;
	while (arr[i] != num)
		i++;
	return (i);
}

void	ft_set_index(t_data *data)
{
	int	i;
	int	n;

	i = 0;
	while (i < data->size)
	{
		n = ft_find_index(data->a_stack.stack[i].num, data->sort_array);
		data->a_stack.stack[i].index = n;
		i++;
	}
}
