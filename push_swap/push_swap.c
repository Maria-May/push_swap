/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:08:00 by mdaryn            #+#    #+#             */
/*   Updated: 2022/03/03 15:08:02 by mdaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_data *data)
{
	ft_sort_arr(data);
	ft_set_index(data);
	if (data->size == 2)
		sort_2_val(data);
	else if (data->size == 3)
		sort_3_val(data);
	else if (data->size == 4 || data->size == 5)
		sort_4_5_val(data);
	else
		main_sort(data);
}

int	main(int argc, char **argv)
{
	t_data	*data;

	data = malloc(sizeof(t_data));
	if (!data)
		return (0);
	data->size = argc -1;
	data->fd = 1;
	if (ft_check_args_number(argv, data) && ft_check_args_int(argv, data))
	{
		data->a_stack.stack = malloc(sizeof(t_item) * data->size);
		data->a_stack.len = data->size;
		data->b_stack.stack = malloc(sizeof(t_item) * data->size);
		data->b_stack.len = 0;
		data->sort_array = malloc(sizeof(int) * data->size);
		ft_fill_a_stack(argv, data);
		if (!ft_is_stack_sorted(data))
			ft_sort(data);
	}
	else
		write(2, "Error\n", 6);
	exit(0);
}
