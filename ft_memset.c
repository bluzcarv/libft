/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluzcarv <bluzcarv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 21:00:22 by bluzcarv          #+#    #+#             */
/*   Updated: 2021/08/19 23:23:52 by bluzcarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/* Memset writes (n) bytes of value (c - converted to an unsigned char) to
	 * the string (s), it returns (s). We create an unsigned char string
	 * of (s) to hold a casted version of it, and a counter [i]. As long as the
	 * counter is less than (n) we assign each s index with (c) and increment
	 * [i]. */

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = (unsigned char *) str;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
