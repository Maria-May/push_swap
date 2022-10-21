/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:07:20 by mdaryn            #+#    #+#             */
/*   Updated: 2022/03/03 15:07:22 by mdaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	t_item	tmp;

	if (stack->len > 1)
	{
		tmp = stack->stack[0];
		stack->stack[0] = stack->stack[1];
		stack->stack[1] = tmp;
	}
}

void	push(t_stack *src, t_stack *dst)
{
	int	i;

	if (src->len > 0)
	{
		i = dst->len + 1;
		while (i > 0)
		{
			dst->stack[i] = dst->stack[i - 1];
			i--;
		}
		dst->stack[0] = src->stack[0];
		i = 0;
		while (i < src->len - 1)
		{
			src->stack[i] = src->stack[i + 1];
			i++;
		}
		dst->len += 1;
		src->len -= 1;
	}
}

void	rotate(t_stack	*stack)
{
	int		i;
	t_item	tmp;

	i = 0;
	if (stack->len > 1)
	{
		tmp = stack->stack[0];
		while (i < stack->len - 1)
		{
			stack->stack[i] = stack->stack[i + 1];
			i++;
		}
		stack->stack[i] = tmp;
	}
}

void	reverse_rotate(t_stack *stack)
{
	int		i;
	t_item	tmp;

	i = stack->len;
	if (stack->len > 1)
	{
		tmp = stack->stack[stack->len - 1];
		while (i > 0)
		{
			stack->stack[i] = stack->stack[i - 1];
			i--;
		}
		stack->stack[0] = tmp;
	}
}
