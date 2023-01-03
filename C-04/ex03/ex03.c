/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 19:09:25 by vgoncalv          #+#    #+#             */
/*   Updated: 2022/07/13 11:24:27 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int	main(int argc, char** argv)
{
	int a;
	int b;

	b = argc;
	a = ft_atoi(argv[1]);
	printf("%d\n", a);
}
