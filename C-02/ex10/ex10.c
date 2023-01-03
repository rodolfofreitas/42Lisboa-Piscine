/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex10.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:07:07 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/07 15:07:10 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				main(void)
{
	int 	src_size;
	int 	src_size1;
	char 	*src;
	char 	*dest;



	src = calloc(11, sizeof(char));
	dest = calloc(8, sizeof(char));
	src = "E ai pessoal, como vai?asdfadsfadsfadsfasfasf adsfadsfadsfadsfas adsfadsfadsfads afadsfadsfadsf adsfadsfadsfadsfas asdfadsfadsfads asdfasfasfas";
	
	printf("Com a funcao strlcpy");
	src_size1 = strlcpy(dest, src, 143);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("src_size: %d\n", src_size1);
	
	printf("Com a funcao ft_strlcpy");
	src_size = ft_strlcpy(dest, src, 25);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("src_size: %d\n", src_size);
	return(0);
}
