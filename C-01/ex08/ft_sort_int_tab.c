/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 21:13:56 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/05 21:41:02 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	p;
	int	s;
	int	temp;

	p = 0;
	s = 1;
	while (p < size -1)
	{
		if (tab[p] > tab[s])
		{
			temp = tab[p];
			tab[p] = tab[s];
			tab[s] = temp;
			p = -1;
			s = 0;
		}
		p++;
		s++;
	}
}
