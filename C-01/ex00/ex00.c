/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:24:46 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/05 11:28:23 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	*nbr;
	int	n;

	nbr = &n;
	ft_ft(nbr);
	printf("n: %d, *nbr: %d, n_address: %p\n", n, *nbr, nbr);
	return (0);
}
