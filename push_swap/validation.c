/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:27:50 by mdaryn            #+#    #+#             */
/*   Updated: 2022/03/03 15:27:51 by mdaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_args_number(char **argv, t_data *data)
{
	int	i;

	i = 0;
	while (i++ < data->size)
	{
		if (!ft_isnumeric(argv[i]))
			return (0);
	}
	return (1);
}

int	ft_check_args_int(char **argv, t_data *data)
{
	int		i;
	char	*str;

	i = 0;
	while (i++ < data->size)
	{
		str = ft_itoa(ft_atoi(argv[i]));
		if (ft_strcmp(str, argv[i]) != 0)
		{
			free(str);
			return (0);
		}
		free(str);
	}
	return (1);
}

int	ft_is_stack_sorted(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->size - 1)
	{
		if (data->a_stack.stack[i].num > data->a_stack.stack[i + 1].num)
			return (0);
		i++;
	}
	return (1);
}
