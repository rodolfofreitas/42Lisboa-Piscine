/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 18:26:48 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/02 21:14:11 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	imprime(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0' -1;
	while (++a <= '9')
	{
		b = a;
		while (++b <= '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				imprime(a);
				imprime(b);
				imprime(c);
				if (a != '7')
				{
					imprime(',');
					imprime(' ');
				}
				c++;
			}
		}
	}
}
