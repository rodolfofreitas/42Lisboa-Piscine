/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:54:52 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/05 21:11:44 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	min;
	int	max;
	int	temp;

	min = 0;
	max = size;
	while (min < max)
	{
		temp = tab[min];
		tab[min] = tab[max -1];
		tab[max -1] = temp;
		min++;
		max--;
	}
}
