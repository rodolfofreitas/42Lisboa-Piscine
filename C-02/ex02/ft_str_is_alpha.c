/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:53:49 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/07 14:12:33 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	idx;

	idx = 0;
	if (str[idx] == '\0' )
	{
		return (1);
	}
	while (str[idx] != '\0')
	{
		if ((str[idx] >= 'A' && str [idx] <= 'Z')
			|| (str [idx] >= 'a' && str [idx] <= 'z'))
			idx++;
		else
			return (0);
	}	
	return (1);
}
