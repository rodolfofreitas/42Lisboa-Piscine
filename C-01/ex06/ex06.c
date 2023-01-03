/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:56:49 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/05 15:40:17 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char 	*str = "A escola 42 e fantastica! Estou a aprender muito!"; 
	int		size;

	size = ft_strlen(str);
	printf("A string e:\"%s\"\na funcao ft_strlen conta: %d caracteres.\n", str, size);
	return (0);
}
