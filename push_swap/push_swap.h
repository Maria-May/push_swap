/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:08:33 by mdaryn            #+#    #+#             */
/*   Updated: 2022/03/03 15:22:44 by mdaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "get_next_line/get_next_line.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_item
{
	int	num;
	int	index;
}	t_item;

typedef struct s_stack
{
	int		len;
	t_item	*stack;
}	t_stack;

typedef struct s_data
{
	int		fd;
	int		size;
	t_stack	a_stack;
	t_stack	b_stack;
	int		*sort_array;
}	t_data;

void	ft_sort(t_data *data);
int		ft_isnumeric(char *str);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_check_args_number(char **argv, t_data *data);
int		ft_check_args_int(char **argv, t_data *data);
int		ft_is_stack_sorted(t_data *data);
void	ft_fill_a_stack(char **argv, t_data *data);
int		ft_check_doubles(int *arr, int index);
void	ft_set_index(t_data *data);
int		ft_find_index(int num, int *arr);
int		find_index_min(t_stack *stack);
int		find_index_max(t_stack *stack);
int		arr_of_index(t_stack	stack, int *nums);
int		ft_near_index(t_stack	stack, int index);
void	ft_sort_arr(t_data *data);
void	swap(t_stack *stack);
void	push(t_stack *src, t_stack *dst);
void	rotate(t_stack	*stack);
void	reverse_rotate(t_stack *stack);
void	sa(t_data *data);
void	sb(t_data *data);
void	ss(t_data *data);
void	pa(t_data *data);
void	pb(t_data *data);
void	ra(t_data *data);
void	rb(t_data *data);
void	rr(t_data *data);
void	rra(t_data *data);
void	rrb(t_data *data);
void	rrr(t_data *data);
void	sort_2_val(t_data *data);
void	sort_3_val(t_data *data);
void	sort_4_5_val(t_data *data);
void	main_sort(t_data	*data);
void	main_sort_stack_b(t_data *data);
#endif
