/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:05:44 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/16 20:02:42 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	long int	r;

	r = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		r *= nb--;
	}
	return (r);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	printf("%d", ft_iterative_factorial(10));
}
*/