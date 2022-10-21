/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:05:52 by mdaryn            #+#    #+#             */
/*   Updated: 2022/03/03 15:05:54 by mdaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_data *data)
{
	rotate(&data->a_stack);
}

void	rb(t_data *data)
{
	rotate(&data->b_stack);
}

void	rr(t_data *data)
{
	rotate(&data->a_stack);
	rotate(&data->b_stack);
}
