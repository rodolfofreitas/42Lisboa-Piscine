/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:08:06 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/07 15:24:32 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	idx;

	idx = 0;
	if (str[idx] == '\0')
	{
		return (1);
	}
	while (str[idx] != '\0')
	{
		if (str[idx] >= 65 && str[idx] <= 90)
			idx++;
		else
			return (0);
	}
	return (1);
}
