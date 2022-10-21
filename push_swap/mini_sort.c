/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:02:32 by mdaryn            #+#    #+#             */
/*   Updated: 2022/03/03 15:02:34 by mdaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2_val(t_data *data)
{
	if (data->a_stack.stack[0].index > data->a_stack.stack[1].index)
		sa(data);
}

void	sort_3_val(t_data *data)
{
	t_stack	stack;

	stack = data->a_stack;
	if (stack.stack[0].index == find_index_max(&stack))
		ra(data);
	if (stack.stack[0].index == find_index_min(&stack)
		&& stack.stack[1].index == find_index_max(&stack))
	{
		rra(data);
		sa(data);
	}
	if (stack.stack[0].index != find_index_min(&stack)
		&& stack.stack[0].index > stack.stack[1].index)
		sa(data);
	if (stack.stack[0].index != find_index_min(&stack)
		&& stack.stack[0].index < stack.stack[1].index)
		rra(data);
}

void	sort_4_5_val(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->size - 2)
	{
		if (data->a_stack.stack[0].index > find_index_min(&data->a_stack)
			&& !ft_near_index(data->a_stack, find_index_min(&data->a_stack)))
			ra(data);
		else if (data->a_stack.stack[0].index > find_index_min(&data->a_stack)
			&& ft_near_index(data->a_stack, find_index_min(&data->a_stack)))
			rra(data);
		else
		{
			pb(data);
			i++;
		}
	}
	if (data->a_stack.stack[0].index != find_index_min(&data->a_stack))
		sa(data);
	while (data->b_stack.len)
		pa(data);
}
