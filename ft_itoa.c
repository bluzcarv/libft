/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluzcarv <bluzcarv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:26:30 by bluzcarv          #+#    #+#             */
/*   Updated: 2021/08/19 21:42:13 by bluzcarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/* Itoa converts int value to a NULL-terminated string and stores the result
	 * in the array given by str parameter. Itoa starts by creating a char
	 * string (str) variable - this is what will be returned. Then, allocate
	 * memory for 2 char values, because we want to do one characrter at a
	 * time from the given int n. One space for the converted digit number to a
	 * char and the terminating '\0' that is needed to finish that individual
	 * char's string. (if allocation fails we return NULL). The second if is
	 * to take care to the smallest integer possible (-2147483648). The thrid
	 * if will take care of negative symbols. Last we will make use of the
	 * auxiliar functions created: ft_count_digit and ft_power. */

static char	*ft_strcpy(char *dst, const char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static int	ft_count_digit(int n)
{
	int		i;

	i = 0;
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static int	ft_power(int i)
{
	int		div;

	div = 1;
	while (i > 0)
	{
		div = div * 10;
		i--;
	}
	return (div);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		div;

	i = ft_count_digit(n);
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (str == NULL)
		return (NULL);
	div = ft_power(i - 1);
	i = 0;
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (n < 0)
	{
		str[i++] = '-';
		n = -n;
	}
	while (div > 0)
	{
		str[i] = (n / div % 10 + '0');
		i++;
		div = div / 10;
	}
	str[i] = '\0';
	return (str);
}
