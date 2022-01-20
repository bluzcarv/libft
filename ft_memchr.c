/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluzcarv <bluzcarv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 21:39:52 by bluzcarv          #+#    #+#             */
/*   Updated: 2021/08/19 23:36:32 by bluzcarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/* Memchr locates the first occurence of c (converted to an unsigned char)
	 * in string s and returns a pointer to the byte located, or NULL if no
	 * such byte exists within n bytes. We create a char pointer string (s)
	 * that will place the casted version of the function parameter (str) and
	 * a size_t that will be used as a counter. The while loop will occur as
	 * long as the counter [i] is less then [n], inside we will check if the
	 * current index position that has been casted as a char is equal to the
	 * parameter (c). If true, it will return a char casted pointer to the
	 * index position that contains (c). If there's is no (c) throughout the
	 * string, it will return (NULL).*/

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	char			*s;

	i = 0;
	s = (char *)str;
	while (i < n)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
