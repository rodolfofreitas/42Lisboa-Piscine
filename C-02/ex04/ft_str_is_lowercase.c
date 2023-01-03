/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:52:11 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/07 15:06:53 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	idx;

	idx = 0;
	if (str[idx] == '\0')
	{
		return (1);
	}
	while (str[idx] != '\0')
	{
		if (str[idx] >= 97 && str[idx] <= 122)
			idx++;
		else
			return (0);
	}
	return (1);
}
