/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_nb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obraiki <obraiki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:47:21 by obraiki           #+#    #+#             */
/*   Updated: 2022/04/23 17:18:51 by obraiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	sort5_2(t_p1 *a, t_p1 *b, int min)
{
	if (a->arry[1] == min)
	{
		rrotat(a, "rra\n");
		rrotat(a, "rra\n");
		push_top(a, b, "pb\n");
	}
	if (a->arry[0] == min)
	{
		rrotat(a, "rra\n");
		push_top(a, b, "pb\n");
	}
}

void	sort5(t_p1 *a, t_p1 *b)
{
	int	i ;
	int	min;

	i = -1;
	while (++i < 2)
	{
		min = is_get_min(a);
		if (a->arry[a->top] == min)
			push_top(a, b, "pb\n");
		if (a->arry[a->top - 1] == min)
		{
			swap(a, "sa\n");
			push_top(a, b, "pb\n");
		}
		if (a->arry[2] == min)
		{
			rotat_stack(a, "ra\n");
			swap(a, "sa\n");
			push_top(a, b, "pb\n");
		}
		sort5_2(a, b, min);
	}
	sort3(a);
	push_top(b, a, "pa\n");
	push_top(b, a, "pa\n");
}

void	sort3(t_p1 *stack)
{
	int	*arr;

	arr = stack->arry;
	if (arr[0] > arr[1] && arr[1] < arr[2] && arr[2] < arr[0])
		swap(stack, "sa\n");
	else if (arr[0] < arr[1] && arr[1] < arr[2] && arr[2] > arr[0])
	{
		swap(stack, "sa\n");
		rrotat(stack, "rra\n");
	}
	else if (arr[0] > arr[1] && arr[1] < arr[2] && arr[2] > arr[0])
		rotat_stack(stack, "ra\n");
	else if (arr[0] < arr[1] && arr[1] > arr[2] && arr[2] < arr[0])
	{
		swap(stack, "sa\n");
		rotat_stack(stack, "ra\n");
	}
	else if (arr[0] < arr[1] && arr[1] > arr[2] && arr[2] > arr[0])
		rrotat(stack, "rra\n");
}

void	sort_2(t_p1 *a)
{
	if (a->arry[1] > a->arry[0])
		swap(a, "sa\n");
}
