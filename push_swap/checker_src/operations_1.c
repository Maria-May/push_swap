/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:04:51 by mdaryn            #+#    #+#             */
/*   Updated: 2022/03/03 15:04:54 by mdaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_data *data)
{
	swap(&data->a_stack);
}

void	sb(t_data *data)
{
	swap(&data->b_stack);
}

void	ss(t_data *data)
{
	swap(&data->a_stack);
	swap(&data->b_stack);
}

void	pa(t_data *data)
{
	push(&data->b_stack, &data->a_stack);
}

void	pb(t_data *data)
{
	push(&data->a_stack, &data->b_stack);
}
