/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluzcarv <bluzcarv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 19:01:12 by bluzcarv          #+#    #+#             */
/*   Updated: 2021/08/19 22:27:01 by bluzcarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/* Memcmp compares string s1 against to s2. Both strings are assumed to be
	 * n bytes long. Returns (0) if the strings are identical, otherwise
	 * returns the difference of the first two different bytes. We create two
	 * char pointers variables that will * place casted versions of s1 and s2
	 * and a counter [i]. The while loop continues as long as the counter is
	 * less than (n). If/ when we reach an index position where the characters
	 * are different, we immidiately return the difference */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
