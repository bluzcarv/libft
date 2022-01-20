/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluzcarv <bluzcarv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:41:18 by bluzcarv          #+#    #+#             */
/*   Updated: 2021/08/21 18:08:11 by bluzcarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/* StrLcat function concatenates the destination string and the source
	 * string, and the result is stored in the destination string. Note: When
	 * we use strcat(), the size of the destination string should be large
	 * enough to store the resultant string. If not, we will get the
	 * segmentation fault error.*/

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	cd;
	unsigned int	cs;

	cd = 0;
	cs = 0;
	while (cd < size && dest[cd] != '\0')
		cd++;
	while ((cd + cs + 1) < size && src[cs] != '\0')
	{
		dest[cd + cs] = src[cs];
		cs++;
	}
	if (cd < size)
		dest[cd + cs] = '\0';
	return (ft_strlen(src) + cd);
}
