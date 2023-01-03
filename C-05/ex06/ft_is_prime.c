/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:41:56 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/17 20:20:35 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long long	i;

	i = 5;
	if (nb == 2 || nb == 3)
		return (1);
	if (nb <= 1 || nb % 2 == 0 || nb % 3 == 0)
		return (0);
	while (i < nb / 3)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}


#include<stdio.h>
int main ()
{
	printf ("%d", ft_is_prime(2147483647));
}