/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:58:15 by mdaryn            #+#    #+#             */
/*   Updated: 2022/03/03 14:58:17 by mdaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	main_sort(t_data	*data)
{
	int	i;
	int	counter;

	i = 0;
	if (data->size <= 100)
		counter = 15;
	else
		counter = 30;
	while (data->a_stack.len != 0)
	{
		if (i > 1 && data->a_stack.stack[0].index <= i)
		{
			pb(data);
			rb(data);
			i++;
		}
		else if (data->a_stack.stack[0].index <= i + counter)
		{
			pb(data);
			i++;
		}
		else if (data->a_stack.stack[0].index >= i)
			ra(data);
	}
	main_sort_stack_b(data);
}

void	main_sort_stack_b(t_data *data)
{
	while (data->b_stack.len != 0)
	{
		if (data->b_stack.stack[0].index != find_index_max(&data->b_stack)
			&& !ft_near_index(data->b_stack, find_index_max(&data->b_stack)))
			rb(data);
		else if (data->b_stack.stack[0].index != find_index_max(&data->b_stack)
			&& ft_near_index(data->b_stack, find_index_max(&data->b_stack)))
			rrb(data);
		else if (data->b_stack.stack[0].index == find_index_max(&data->b_stack))
			pa(data);
	}
}
