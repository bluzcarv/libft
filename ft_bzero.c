/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluzcarv <bluzcarv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 12:27:21 by bluzcarv          #+#    #+#             */
/*   Updated: 2021/08/19 20:47:19 by bluzcarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/* Bzero will erase the memory of a string indexes with zero bytes ('\0')
	 * The first argument is the initial address of the memory area we will
	 * 'zero' and the second arment is the number of bytes we will 'zero'.
	 * We create 2 variables. First will store a string (s). Second will be
	 * an index counter. After type casting s to be able to 'receive' the str
	 * we set a while loop to roam s and 'zero' its bytes until n.*/

void	ft_bzero(void *str, size_t n)
{
	char				*s;
	unsigned int		i;

	i = 0;
	s = (char *) str;
	while (i < n)
	{
		s[i] = '\0';
		i++;
	}
	return ;
}
