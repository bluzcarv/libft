/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluzcarv <bluzcarv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 16:22:39 by bluzcarv          #+#    #+#             */
/*   Updated: 2021/08/19 22:52:34 by bluzcarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/* Memmove copies (n) bytes from srting (src) to string (dest). Returns
	 * dest.Note: a safer approach to memcpy. In general, memcpy is implemented
	 * in a simple (but fast) manner. Simplistically, it just loops over the
	 * data (in order), copying from one location to the other. This can result
	 * in the source being overwritten while it's being read. Memmove does more
	 * work to ensure it handles the overlap correctly.*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src && !dest)
		return (NULL);
	if (src < dest)
	{
		while (n > 0)
		{
			n--;
			((char *)dest)[n] = ((char *)src)[n];
		}
	}
	else
	{
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}
