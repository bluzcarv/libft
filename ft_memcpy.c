/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluzcarv <bluzcarv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 12:49:59 by bluzcarv          #+#    #+#             */
/*   Updated: 2021/08/19 22:35:19 by bluzcarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/* Memcpy copies (n) bytes from (src) to (dest). Returs dest. We start by
	 * creating a counter to move through the index position of both strings.
	 * As long as the index [i] is less than (n) the while loop will be
	 * copying n bytes from src to dest. Than we will mimic the position of
	 * [i] in casted src to the position of [i] in casted dest, and increment
	 * [i] until the end of the loop.*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((char *) dest)[i] = ((char *) src)[i];
		i++;
	}
	return (dest);
}
