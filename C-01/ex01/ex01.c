/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:32:18 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/05 11:39:22 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	a;
	int	*pt1;
	int	**pt2;
	int	***pt3;
	int	****pt4;
	int	*****pt5;
	int	******pt6;
	int	*******pt7;
	int	********pt8;
	int	*********pt9;

	a = 21;
	pt1 = &a;
	pt2 = &pt1;
	pt3 = &pt2;
	pt4 = &pt3;
	pt5 = &pt4;
	pt6 = &pt5;
	pt7 = &pt6;
	pt8 = &pt7;
	pt9 = &pt8;
	printf("Antes de chamar a funcao ft_ultimate: %d\n", *********pt9);
	ft_ultimate_ft(pt9);
	printf("Depois de chamar a funcao ft_ultimate: %d\n", *********pt9);
	return (0);
}
