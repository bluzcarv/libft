/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluzcarv <bluzcarv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 01:17:01 by bluzcarv          #+#    #+#             */
/*   Updated: 2021/09/29 15:04:18 by bluzcarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/* Returns a pointer to a null-terminated byte string, which is a duplicate
	 * of the string pointed to by s1. The returned pointer must be passed to
	 * free to avoid a memory leak (that's why we are applying calloc +1 for
	 * '\0'). We create a new pointer string (s2) to store the new duplicated
	 * string. Then, we apply a NULL verification. And use memcpy to cpy the
	 * content of s1 to s2.*/

char	*ft_strdup(const char *s1)
{
	size_t		size;
	char		*s2;

	size = ft_strlen(s1);
	s2 = ft_calloc((size + 1), sizeof(const char));
	if (s2 == NULL)
		return (NULL);
	s2 = ft_memcpy(s2, s1, size);
	return (s2);
}
