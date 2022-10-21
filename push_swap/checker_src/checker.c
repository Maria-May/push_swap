/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:48:19 by mdaryn            #+#    #+#             */
/*   Updated: 2022/03/04 12:48:22 by mdaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_cmd(char	*line, t_data	*data)
{
	if (!ft_strcmp(line, "sa\n"))
		sa(data);
	else if (!ft_strcmp(line, "sb\n"))
		sb(data);
	else if (!ft_strcmp(line, "ss\n"))
		ss(data);
	else if (!ft_strcmp(line, "pa\n"))
		pa(data);
	else if (!ft_strcmp(line, "pb\n"))
		pb(data);
	else if (!ft_strcmp(line, "ra\n"))
		ra(data);
	else if (!ft_strcmp(line, "rb\n"))
		rb(data);
	else if (!ft_strcmp(line, "rr\n"))
		rr(data);
	else if (!ft_strcmp(line, "rra\n"))
		rra(data);
	else if (!ft_strcmp(line, "rrb\n"))
		rrb(data);
	else if (!ft_strcmp(line, "rrr\n"))
		rrr(data);
	else
		return (0);
	return (1);
}

void	ft_read_cmd(t_data	*data)
{
	char	*line;

	while (1)
	{
		line = get_next_line(0);
		if (!line)
			break ;
		if (!ft_check_cmd(line, data))
		{
			write(2, "Error\n", 6);
			exit(0);
		}
		free(line);
	}
	if (ft_is_stack_sorted(data) && data->b_stack.len == 0)
		write(1, "OK\n", 3);
	else
		write(2, "KO\n", 3);
}

int	main(int argc, char **argv)
{
	t_data	*data;

	data = malloc(sizeof(t_data));
	if (!data)
		return (0);
	data->size = argc -1;
	if (data->size == 0)
	{
		free(data);
		return (0);
	}
	data->fd = 1;
	if (ft_check_args_number(argv, data) && ft_check_args_int(argv, data))
	{
		data->a_stack.stack = malloc(sizeof(t_item) * data->size);
		data->a_stack.len = data->size;
		data->b_stack.stack = malloc(sizeof(t_item) * data->size);
		data->b_stack.len = 0;
		data->sort_array = malloc(sizeof(int) * data->size);
		ft_fill_a_stack(argv, data);
		ft_read_cmd(data);
	}
	else
		write(2, "Error\n", 6);
	exit(0);
}
