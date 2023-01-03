/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:42:58 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/07 20:32:38 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] >= 'A' && str[idx] <= 'Z')
		{
			str[idx] += 32;
		}
			idx++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		idx;
	int		idx1;

	idx = 0;
	idx1 = 1;
	ft_strlowcase(str);
	while (str[idx] != '\0')
	{
		if (str[idx] >= 'a' && str[idx] <= 'z')
		{
			if (idx1 == 1)
				str[idx] -= 32;
				idx1 = 0;
		}
		else if (str[idx] >= '0' && str[idx] <= '9')
			idx1 = 0;
		else
			idx1 = 1;
		idx++;
	}
	str[idx] = '\0';
	return (str);
}
