/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:06:56 by mdaryn            #+#    #+#             */
/*   Updated: 2022/03/03 15:06:59 by mdaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_data *data)
{
	reverse_rotate(&data->a_stack);
	write(1, "rra\n", 4);
}

void	rrb(t_data *data)
{
	reverse_rotate(&data->b_stack);
	write(1, "rrb\n", 4);
}

void	rrr(t_data *data)
{
	reverse_rotate(&data->a_stack);
	reverse_rotate(&data->b_stack);
	write(1, "rrr\n", 4);
}
