/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluzcarv <bluzcarv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 20:58:47 by bluzcarv          #+#    #+#             */
/*   Updated: 2021/08/30 09:43:31 by bluzcarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/* This function allocates memory and returns a new copy of a portion of
	 * the string passed in the parameter. The portion begins at the index
	 * parameter of start and will have the length of the parameter len. If
	 * start and len do not designate a portion of a valid string the behavior
	 * is undefined. If the memory allocation fails the function will return
	 * NULL.*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		slen;
	size_t		i;

	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (slen - start < len)
		len = slen - start;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i + start] && (i < len))
	{
		str[i] = s[start + i];
		i++;
	}
	str[len] = '\0';
	return (str);
}
