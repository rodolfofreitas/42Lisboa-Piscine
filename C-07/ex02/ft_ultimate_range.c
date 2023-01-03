/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:48:21 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/20 16:42:47 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *matriz;
	int i;

	if (min >= max)
		return (0);
	matriz = malloc((max - min) * sizeof(int));
	if (matriz == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		matriz[i] = min;
		i++;
		min++;
	}
	return (matriz);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (!range)
	{
		*range = 0;
		return (-1);
	}
	return (max - min);
}

/* 
#include<stdio.h>
int		main(void)
{
	int		*range;
	int		i;

	i = 0;
	printf("return : %d\n", ft_ultimate_range(&range, -5, 5));
	while (i < 10)
	{
	printf("%d\n", range[i]);
		i++;
	}
	return (0);
} */
