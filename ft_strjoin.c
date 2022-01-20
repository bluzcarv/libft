/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluzcarv <bluzcarv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 23:27:23 by bluzcarv          #+#    #+#             */
/*   Updated: 2021/08/21 18:12:20 by bluzcarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/* Strjoin allocates the memory and returns a new string terminated by a
	 * '\0' which is the result of a concatenation of the parameters s1 and s2
	 * If fails, return NULL. We create 2 counters that will go through s1 and
	 *  s2, and third will be a string that we will apply malloc and return the
	 * concatenation. The malloc function with a combination of using our
	 * previously made ft_strlen functions. We use the ft_strlen function
	 * on both the parameter strings to figure out the full length for a
	 * concatenation and we add 1 to this added length to make sure we can
	 * add a terminating '\0'. If the allocation failed we will return NULL.
	 * We start with s1 with a standard string loop, run through the length of
	 * s1 placing each character in s1 into str.The next loop is exactly the
	 * same as the previous loop except you must take note of our use of the
	 * counter variable j. j is currently equal to 0 at this point in our
	 * function. For our new string str we set the index equal to the previous
	 * counter i plus our new counter j. This keeps us at the index position we
	 * ended on when our previous loop finished since it will be the value i
	 * was at the end of the previous loop plus j's current value of 0. We use
	 * j to set the index of our string s2 and let the loop go until we have
	 * reached the end of s2.*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	int				i1;
	int				i2;

	i1 = 0;
	i2 = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i1] != '\0')
	{
		str[i1] = s1[i1];
		i1++;
	}
	while (s2[i2] != '\0')
	{
		str[i1 + i2] = s2[i2];
		i2++;
	}
	str[i1 + i2] = '\0';
	return (str);
}
