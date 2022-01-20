/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluzcarv <bluzcarv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 01:29:34 by bluzcarv          #+#    #+#             */
/*   Updated: 2021/08/21 18:11:26 by bluzcarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/* Strlcpy function copies up to size - 1 characters from the
	 * NUL-terminated string src to dst, NUL-terminating the result.*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen (src));
	while (i < (dstsize - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
	/*Buffer size is the amount of time it takes for your computer to process
	 * any incoming audio signal. This function will be returning the size of
	 * src.*/
