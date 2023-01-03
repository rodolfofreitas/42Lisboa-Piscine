/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 21:19:27 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/02 22:15:16 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	imprime(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	primeiro;
	int	segundo;

	primeiro = -1;
	while (primeiro++ < 98)
	{
		segundo = primeiro;
		while (segundo++ < 99)
		{
			imprime ((primeiro / 10) + '0');
			imprime ((primeiro % 10) + '0');
			imprime (' ');
			imprime ((segundo / 10) + '0');
			imprime ((segundo % 10) + '0');
			if (primeiro != 98)
			{
				imprime(',');
				imprime(' ');
			}
		}
	}
}	
