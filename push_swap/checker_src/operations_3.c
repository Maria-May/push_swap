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

#include "../push_swap.h"

void	rra(t_data *data)
{
	reverse_rotate(&data->a_stack);
}

void	rrb(t_data *data)
{
	reverse_rotate(&data->b_stack);
}

void	rrr(t_data *data)
{
	reverse_rotate(&data->a_stack);
	reverse_rotate(&data->b_stack);
}
