/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:02:29 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/17 20:13:02 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	long long  i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
		++i;
	if (i * i == nb)
		return (i);
	return (0);
}

/*
#include <stdio.h>

int main()
{
	int d;
	int offset;
	int test_nums[10] = {1, 4, 9, 16, 25, 36, 49, 64, 81, 100};
	int result[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	offset = 0;
	d = 0;
	while (offset < 10)
	{
		d = ft_sqrt(test_nums[offset]);
		printf("\nRaiz de: %d pela funcao e: 
		%d, o correto e: %d", test_nums[offset],d ,result[offset]);
		offset++;
	}
	printf("\nDone.\n");
}
*/