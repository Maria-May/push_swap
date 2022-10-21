/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:24:02 by mdaryn            #+#    #+#             */
/*   Updated: 2022/03/03 15:24:04 by mdaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_index_min(t_stack *stack)
{
	int	i;
	int	index;

	i = 0;
	index = stack->stack[i].index;
	while (i < stack->len)
	{
		if (stack->stack[i].index < index)
			index = stack->stack[i].index;
		i++;
	}
	return (index);
}

int	find_index_max(t_stack *stack)
{
	int	i;
	int	index;

	i = 0;
	index = stack->stack[i].index;
	while (i < stack->len)
	{
		if (stack->stack[i].index > index)
			index = stack->stack[i].index;
		i++;
	}
	return (index);
}	

int	arr_of_index(t_stack	stack, int *nums)
{
	int	i;

	i = -0;
	while (i < stack.len)
	{
		nums[i] = stack.stack[i].index;
		i++;
	}
	return (*nums);
}

int	ft_near_index(t_stack	stack, int index)
{
	int	i;
	int	n;
	int	*nums;

	i = stack.len - 1;
	nums = malloc(sizeof(int) * (i + 1));
	if (!nums)
		return (0);
	*nums = arr_of_index(stack, nums);
	n = i;
	while (nums[i] != index)
		i--;
	n = n - i;
	i = 0;
	while (nums[i] != index)
		i++;
	free(nums);
	if (n < i)
		return (1);
	return (0);
}
